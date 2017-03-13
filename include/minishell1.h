/*
** minishell1.h for minishell1 in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1/include
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Mon Jan 16 10:07:19 2017 Miles PROWER
** Last update	Sun Jan 22 15:58:13 2017 Vincent PARRES
*/

#ifndef MINISHELL1_H_
# define MINISHELL1_H_

# include "libtails.h"
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>
# include <signal.h>
# include <stdio.h>
# include <sys/stat.h>

typedef struct	s_my_env
{
  char **env;
  char **path;
}		t_my_env;

int		tails_exec(char **cmd, char **env);
void		check_slash(t_my_env *senv, char *command);
void		tails_prompt(t_my_env *senv);
t_my_env*	env_init(char **env);
void		tails_exit(t_my_env *senv);
int		my_strprefix(char *s1, char *s2, int n);
int		find_var(char **env, char *var);
void		tails_cd(char **cmd, char **env);

#endif /* MINISHELL1_H_ */
