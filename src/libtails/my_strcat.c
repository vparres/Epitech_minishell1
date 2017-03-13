/*
** my_strcat.c for my_strcat in /Users/vparres/Documents/Epitech/libmy/
**
** Made by Vincent PARRES
** Login   <vincent.parres@epitech.eu@epitech.eu>
**
** Started on  Thu Nov 17 12:31:09 2016 Vincent PARRES
** Last update	Sun Jan 22 16:30:18 2017 Vincent PARRES
*/

char	*my_strcat(char *dest, char *src)
{
  int	j;
  int	i;

  i = 0;
  j = 0;
  while (dest[i])
    {
      i += 1;
    }
  while (src[j])
    {
      dest[i] = src[j];
      i += 1;
      j += 1;
    }
  dest[i] = '\0';
  return dest;
}
