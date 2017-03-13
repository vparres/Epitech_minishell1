/*
** strcmp.c for libtails
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Sat Jan 21 20:23:30 2017 Vincent PARRES
** Last update	Sat Jan 21 20:23:51 2017 Vincent PARRES
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;

  while (s1[i] && s2[i] && s1[i] == s2[i])
    i += 1;
  return (s1[i] - s2[i]);
}
