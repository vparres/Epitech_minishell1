/*
** pwd.c for minishell1
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Sun Jan 22 15:58:27 2017 Vincent PARRES
** Last update	Sun Jan 22 16:02:40 2017 Vincent PARRES
*/

#include "minishell1.h"

void	tails_pwd(t_my_env *senv)
{
  int	id;

  id = find_var(senv->env, "PWD=");
  my_printf("%s", senv->env[id]);
}
