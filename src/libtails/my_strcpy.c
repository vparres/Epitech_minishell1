/*
** my_strcpy.c for Epitech
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Thu Jan 19 10:09:05 2017 Vincent PARRES
** Last update	Thu Jan 19 10:12:09 2017 Vincent PARRES
*/

#include "libtails.h"

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (i < my_strlen(src))
    {
      dest[i] = src[i];
      i++;
    }
  return (dest);
}
