/*
** prompt.c for minishell1
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Fri Jan 20 10:19:50 2017 Vincent PARRES
** Last update	Sun Jan 22 16:14:46 2017 Vincent PARRES
*/

#include "minishell1.h"

void	tails_prompt(t_my_env *senv)
{
  int	ret;
  char	*str;
  int	x;

  my_printf("Tails-sh $> ");
  while	((str = get_next_line(0)))
    {
      x = 0;
      if (my_strlen(str) == 0)
	x = 1;
      if (x == 0)
	{
	  check_slash(senv, str);
	  my_printf("Tails-sh $> ");
	}
      else
	my_printf("Tails-sh $> ");
    }
}
