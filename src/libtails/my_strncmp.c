/*
** my_strncmp.c for libtails
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Sat Jan 21 20:22:47 2017 Vincent PARRES
** Last update	Sat Jan 21 20:32:34 2017 Vincent PARRES
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n || n < 0))
    i += 1;
  return (s1[i] - s2[i]);
}
