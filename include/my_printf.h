/*
** my_printf.h for my_printf in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Tue Feb 21 12:23:12 2017 Miles PROWER
** Last update Tue Feb 21 12:23:16 2017 Miles PROWER
*/

#ifndef MYPRINTF_H_
#define MYPRINTF_H_
#include "libtails.h"
#include <unistd.h>
#include <stdarg.h>

int	print_percent(va_list *ap, int n, char c);
int	print_str(va_list *ap, int n, char c);
int	print_char(va_list *ap, int n, char c);
int	print_int(va_list *ap, int n, char c);
int	showtime(va_list *ap, int n, char c);

#endif /* MYPRINTF_H_ */
