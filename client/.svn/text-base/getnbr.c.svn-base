/*
** getnbr.c for client in /home/perinp_r//new_projet/minitalk/client
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 11:01:33 2013 ravivarman perinpanathan
** Last update Sat May  4 17:18:15 2013 ravivarman perinpanathan
*/

#include "client.h"

int		expo(int e)
{
  int		s;

  s = 1;
  while (e > 0)
    {
      s = s * 10;
      e = e - 1;
    }
  return (s);
}

int		my_getnbr(char *str)
{
  int		i;
  int		j;
  int		res;

  i = 0;
  res = 0;
  while (str[i] != '\0')
    i = i + 1;
  j = i - 1;
  while (i > 0)
    {
      i = i - 1;
      res = res + (str[i] - 48) * expo (j - i);
    }
  return (res);
}
