/*
** my_put_nbr.c for my_put_nbr in /Users/vparres/Documents/Epitech/libmy/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu@epitech.eu>
**
** Started on  Thu Nov 17 12:19:09 2016 Vincent PARRES
** Last update Mon Jan 16 10:37:05 2017 Miles PROWER
*/

#include "libtails.h"

int	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = - nb;
    }
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    {
      my_putchar(nb + 48);
    }
  return (0);
}
