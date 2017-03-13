/*
** envinit.c for minishell1
**
** Made by	Vincent PARRES
** Login	vincent.parres@epitech.eu
**
** Started on	Sat Jan 21 18:52:00 2017 Vincent PARRES
** Last update	Sun Jan 22 15:06:04 2017 Vincent PARRES
*/

#include "minishell1.h"

int	my_strprefix(char *s1, char *s2, int n)
{
  int	i;

  i = 0;
  while (s1[i] && s2[i] && s1[i] == s2[i] && (i < n || n < 0))
    i += 1;
  return (i);
}

int	find_var(char **env, char *var)
{
  int	i;

  i = -1;
  while (env[++i] != NULL)
    {
      if (my_strprefix(env[i], var, my_strlen(var)) == 5)
        return (i);
    }
  return (-1);
}

char	**get_path(char **env)
{
  int	id;
  char	**path;
  char	**tmp;

  id = find_var(env, "PATH=");
  if (id == -1)
    {
      tmp = malloc(sizeof(char*) * 2);
      tmp[0] = malloc(sizeof(char) * 1);
      tmp[0] = "";
      tmp[1] = NULL;
      return (tmp);
    }
  tmp = str_to_tab(env[id], '=');
  path = str_to_tab(tmp[1], ':');
  free(tmp);
  return (path);
}

char	**copy_env(char **env)
{
  int	i;
  char	**newenv;

  i = -1;
  newenv = malloc(sizeof(char*) * (tablen(env) + 1));
  if (newenv == NULL)
    return (NULL);
  while (env[++i] != NULL)
    {
      newenv[i] = malloc(sizeof(char) * (my_strlen(env[i]) + 1));
      if (newenv[i] == NULL)
        return (NULL);
      my_strcpy(newenv[i], env[i]);
    }
  newenv[i] = NULL;
  return (newenv);
}

t_my_env*	env_init(char **env)
{
  t_my_env	*senv;

  senv = malloc(sizeof(t_my_env));
  senv->env = copy_env(env);
  senv->path = get_path(env);
  return (senv);
}
