/*
** putnbr.c for server in /home/perinp_r//new_projet/minitalk/server
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 12:21:10 2013 ravivarman perinpanathan
** Last update Sat May  4 17:36:03 2013 ravivarman perinpanathan
*/

#include "server.h"

void		my_putnbr(int nb)
{
  int		power;

  power = 1;
  if (nb < 0)
    {
      my_putchar('-');
    }
  else
    nb = nb * -1;
  while (nb / power < -9)
    {
      power = power * 10;
    }
  while (power != 0)
    {
      my_putchar((nb / power) * -1 + '0');
      nb = nb % power;
      power = power / 10;
    }
}
