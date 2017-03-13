/*
** libtails.h for libtails in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1
**
** Made by Miles PROWER
** Login   <tails@epitech.net>
**
** Started on  Tue Feb 21 12:22:15 2017 Miles PROWER
** Last update Tue Feb 21 12:22:21 2017 Miles PROWER
*/

#ifndef TAILS_H_
# define TAILS_H_

# ifndef READ_SIZE
#  define READ_SIZE 2
# endif /* !READ_SIZE */

void	my_putchar(char c);
int	my_put_nbr(int nb);
int	my_strlen(char *str);
char	*my_strncpy(char *dest, char *src , int n);
char	*my_strcpy(char *dest, char *src);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int i);
void	tabprint(char **tab);
int	tablen(char **tab);
int	my_printf(const char *str, ...);
void	my_zero(char *str, int size);
char	*my_realloc(char *str, int size);
char	*get_next_line(const int fd);
void	tabprint(char **tab);
int	tablen(char **tab);
char	**str_to_tab(char *str, char sep);
char	*my_strcat(char *dest, char *src);

#endif /* TAILS_H_ */
