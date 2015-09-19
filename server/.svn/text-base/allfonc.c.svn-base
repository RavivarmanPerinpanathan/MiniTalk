/*
** allfonc.c for minitalk in /home/perinp_r//new_projet/minitalk
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 10:53:10 2013 ravivarman perinpanathan
** Last update Sat May  4 18:16:13 2013 ravivarman perinpanathan
*/

#include <unistd.h>
#include "server.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

int		my_putstr(char *str)
{
  int		i;

  i = 0;
  while(str[i] != '\0')
    {
      my_putchar(str[i]);    
      i++;
    }
  return (0);
}

int		my_puterror(char *str)
{
  write(2, str, my_strlen(str));
  return (0);
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    {
      i++;
    }
  return (i);
}
