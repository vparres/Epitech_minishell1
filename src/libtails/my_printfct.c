/*
** my_printfct.c for my_printf in /Users/vparres/Documents/Epitech/PSU_2016_my_printf/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu>
**
** Started on  Sun Nov 20 11:58:11 2016 Vincent PARRES
** Last update Tue Feb 21 13:14:44 2017 Miles PROWER
*/

#include "my_printf.h"

int	print_char(va_list *ap, int n, char c)
{
  int	i;

  i = va_arg(*ap, int);
  n += write(1, &i, 1);
  return (n);
}

int	print_str(va_list *ap, int n, char c)
{
  char	*str;

  str = va_arg(*ap, char *);
  n += write(1, str, my_strlen(str));
  return (n);
}

int	print_int(va_list *ap, int n, char c)
{
  int	nb;

  nb = va_arg(*ap, int);
  if (nb < 0)
    {
      n += write(1, "-", 1);
      nb = - nb;
    }
  if (nb / 10 > 0)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  else
    {
      nb += 48;
      n += write(1, &nb, 1);
    }
  return (n);
}

int	print_percent(va_list *ap, int n, char c)
{
  n += write(1, "%", 1);
  return (n);
}

int	showtime(va_list *ap, int n, char c)
{
  n += write(1, "%", 1);
  n += write(1, &c, 1);
  return (n);
}
