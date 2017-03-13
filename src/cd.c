/*
** cd.c for minishell1 in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Tue Feb 21 15:29:31 2017 Miles PROWER
** Last update Tue Feb 21 16:50:43 2017 Miles PROWER
*/

#include "minishell1.h"

int	check_args(char **cmd)
{
  int	i;

  i = -1;
  while (cmd[++i] != NULL);
  if (i == 1 || i == 2)
    return (i);
  if (i >= 3)
    {
      my_printf("cd: Too many arguments.\n");
      return (3);
    }
}

void	tails_cd(char **cmd, char **env)
{
  int	chk;
  int	hid;
  char	**home;

  hid = find_var(env, "HOME=");
  chk = check_args(cmd);
  if (chk == 1)
    {
      if (!(home = str_to_tab(env[hid], '=')))
	return ;
      chdir(home[1]);
      free(home);
      return ;
    }
  if (chk == 2)
    {
      chdir(cmd[1]);
      return ;
    }
  if (chk == 3)
    return ;
}
