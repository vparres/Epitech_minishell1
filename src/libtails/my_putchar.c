/*
** my_putchar.c for my_putchar in /Users/vparres/Documents/Epitech/libmy/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu@epitech.eu>
**
** Started on  Thu Nov 17 12:19:35 2016 Vincent PARRES
** Last update Thu Nov 17 12:27:56 2016 Vincent PARRES
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
