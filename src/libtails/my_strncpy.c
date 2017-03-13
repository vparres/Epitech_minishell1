/*
** my_strncpy.c for my_strncpy in /Users/vparres/Documents/Epitech/libmy/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu@epitech.eu>
**
** Started on  Thu Nov 17 12:35:01 2016 Vincent PARRES
** Last update	Wed Jan 18 10:39:26 2017 Vincent PARRES
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (i < n)
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return(dest);
}
