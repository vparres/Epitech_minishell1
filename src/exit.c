/*
** exit.c for minishell1
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Sat Jan 21 12:26:45 2017 Vincent PARRES
** Last update	Sat Jan 21 22:30:15 2017 Vincent PARRES
*/

#include "minishell1.h"

void	tails_exit(t_my_env *senv)
{
  free(senv->env);
  free(senv->path);
  exit (0);
}
