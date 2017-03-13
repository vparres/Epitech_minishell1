/*
** exec.c for minishell1 in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Mon Jan 16 10:08:43 2017 Miles PROWER
** Last update	Sun Jan 22 16:32:32 2017 Vincent PARRES
*/

#include "minishell1.h"

int	check_builtins(t_my_env *senv, char **cmd)
{
  if (my_strprefix(cmd[0], "exit", 4) == 4 && my_strlen(cmd[0]) == 4)
    tails_exit(senv);
  if (my_strprefix(cmd[0], "cd", 2) == 2 && my_strlen(cmd[0]) == 2)
    {
      tails_cd(cmd, senv->env);
      return (0);
    }
  if (my_strprefix(cmd[0], "exec", 4) == 4)
    {
      tabprint(cmd);
      tails_exec(cmd, senv->env);
      return (0);
    }
  return (1);
}

void	exec_path(t_my_env *senv, char **cmd)
{
  int		i;
  int		malsize;
  char		*tmp;
  struct stat	sb;

  i = 0;
  while (senv->path[i] != NULL)
    {
      malsize = my_strlen(senv->path[i]) + my_strlen(cmd[0]) + 2;
      tmp = malloc(sizeof(char) * malsize);
      my_strcpy(tmp, senv->path[i]);
      my_strcat(tmp, "/");
      my_strcat(tmp, cmd[0]);
      if (stat(tmp, &sb) == 0 && sb.st_mode & S_IXUSR)
        {
          cmd[0] = my_realloc(tmp, (my_strlen(tmp) + 1));
          tails_exec(cmd, senv->env);
          return ;
        }
      i += 1;
    }
  if (check_builtins(senv, cmd) == 0)
    return ;
  else
    my_printf("%s: Command not found.\n", cmd[0]);
}

void	check_slash(t_my_env *senv, char *command)
{
  int	i;
  int	check;
  char	**cmd;

  if (!(cmd = str_to_tab(command, ' ')))
    return ;
  i = -1;
  check = 0;
  while (cmd[0][++i] != '\0')
    {
      if (cmd[0][i] == '/')
        check = 1;
    }
  if (check == 1)
    tails_exec(cmd, senv->env);
  else
    exec_path(senv, cmd);
}

void	check_status(int status)
{
  if (WIFEXITED(status))
    {
      if (WTERMSIG(status) == SIGSEGV)
        {
          my_printf("Segmentation fault (core dumped)\n");
          return ;
        }
      if (WCOREDUMP(status))
        {
          my_printf("Segmentation fault (core dumped)\n");
        }
    }
}

int	tails_exec(char **cmd, char **env)
{
  pid_t	pid;
  int	status;

  pid = fork();
  status = 0;
  if (pid < 0)
    my_printf("Forking failed !\n");
  if (pid != 0)
    {
      waitpid(pid, &status, 0);
      check_status(status);
      return (status);
    }
  else
    {
      execve(cmd[0], cmd, env);
      my_printf("%s: Command not found.\n", cmd[0]);
    }
  return (84);
}
