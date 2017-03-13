/*
** my_strlen.c for my_strlen in /Users/vparres/Documents/Epitech/libmy/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu@epitech.eu>
**
** Started on  Thu Nov 17 12:32:29 2016 Vincent PARRES
** Last update Tue Feb 21 12:27:25 2017 Miles PROWER
*/

int	my_strlen(char *str)
{
  int	i;

  i = -1;
  while (str[++i]);
  return (i);
}
