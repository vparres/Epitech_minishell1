/*
** my_realloc.c for Epitech
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Thu Jan 19 10:03:49 2017 Vincent PARRES
** Last update	Sun Jan 22 16:14:26 2017 Vincent PARRES
*/

#include <stdlib.h>
#include "libtails.h"

char	*my_realloc(char *str, int size)
{
  char	*tmp;

  if (str == NULL)
    {
      str = malloc(sizeof(char) * (size + 1));
      if (str == NULL)
	return (NULL);
      my_zero(str, size + 1);
      return (str);
    }
  tmp = malloc(sizeof(char) * (my_strlen(str) + size + 1));
  if (tmp == NULL)
    return (NULL);
  my_strcpy(tmp, str);
  free(str);
  return (tmp);
}
