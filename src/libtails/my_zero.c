/*
** my_zero.c for Epitech
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Thu Jan 19 10:07:27 2017 Vincent PARRES
** Last update	Thu Jan 19 10:08:37 2017 Vincent PARRES
*/

void	my_zero(char *str, int size)
{
  while (size-- >= 0)
    {
      str[size] = '\0';
    }
}
