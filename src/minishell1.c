/*
** minishell1.c for minishell1 in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1/src
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Mon Jan 16 10:07:38 2017 Miles PROWER
** Last update	Sat Jan 21 23:28:41 2017 Vincent PARRES
*/

#include "minishell1.h"

int	main(int argc, char **argv, char **env)
{
  t_my_env	*senv;

  senv = env_init(env);
  tails_prompt(senv);

  return (0);
}
