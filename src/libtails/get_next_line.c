/*
** get_next_line.c for Epitech
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Thu Jan 19 10:12:36 2017 Vincent PARRES
** Last update	Fri Jan 20 10:53:11 2017 Vincent PARRES
*/

#include <stdlib.h>
#include <unistd.h>
#include "libtails.h"

int	my_carriagecpy(char *src, char *dest)
{
  int i;
  int j;

  i = -1;
  j = my_strlen(dest);
  while (src[++i] != '\0')
    {
      if (src[i] == '\n')
	{
	  dest[j] = '\0';
	  return (i);
	}
      dest[j] = src[i];
      j++;
    }
  dest[j] = '\0';
  return (-1);
}

char	*get_next_line(const int fd)
{
  char		*buf;
  char		*line;
  ssize_t	ret;
  ssize_t	ll;
  int		r;

  line = NULL;
  buf = malloc(sizeof(char) * (READ_SIZE + 1));
  if (buf == NULL)
    return (NULL);
  while ((ret = read(fd, buf, READ_SIZE)) > 0)
    {
      if (ret == -1)
        return (NULL);
      buf[ret] = '\0';
      line = my_realloc(line, ret);
      r = my_carriagecpy(buf, line);
      if (r != -1)
        return(line);
    }
  return (line);
}
