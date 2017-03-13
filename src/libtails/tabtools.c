/*
** tabtools.c for Epitech
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Wed Jan 18 10:55:07 2017 Vincent PARRES
** Last update	Sun Jan 22 16:15:21 2017 Vincent PARRES
*/

#include "libtails.h"
#include <stdlib.h>

void	tabprint(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] != NULL)
    my_printf("Line : %s\n", tab[i]);
}

int	tablen(char **tab)
{
  int i;

  i = -1;
  while (tab[++i] != NULL);
  return (i);
}

int	count_sep(char *str, char sep)
{
  int	ret;
  int	i;

  i = -1;
  ret = 0;
  while (str[++i] != '\0')
    {
      if (str[i] == sep)
        ret++;
    }
  return (ret);
}

int	length_of_str(char *str, int i, char sep)
{
  int	ret;

  ret = 0;
  while (i < my_strlen(str) && str[i] != sep)
    {
      ret++;
      i++;
    }
  return (ret);
}

char	**str_to_tab(char *str, char sep)
{
  int	i;
  int	j;
  int	strlength;
  char	**params;

  params = malloc(sizeof(char *) * (count_sep(str, sep) + 2));
  i = 0;
  j = 0;
  while (str[i] != '\0')
    {
      strlength = length_of_str(str, i, sep);
      if (strlength > 0)
	{
	  params[j] = malloc(sizeof(char) * (strlength + 1));
	  my_strncpy(params[j], str + i, strlength);
	  params[j][strlength] = '\0';
	  j += 1;
	  i += strlength;
	}
      else
	i++;
    }
  params[j] = NULL;
  return (params);
}
