/*
** server.c for minitalk in /home/perinp_r//new_projet/minitalk/server
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 12:29:45 2013 ravivarman perinpanathan
** Last update Sat May  4 17:46:19 2013 ravivarman perinpanathan
*/
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "server.h"

void	my_writer(int bin)
{
  static	char c;
  static	int i;
                                                          
  c += (bin << i++);
  if (i > 7)
    {
      my_putchar((c == '\0') ? '\n' : c);
      c = 0;
      i = 0;
    }
}

void	server()
{
  my_putstr("HELLO AND WELCOME TO MINITALK\n");
  my_putstr("  YOUR SERVER PID IS - ");
  my_putnbr(getpid());
  my_putchar('\n');
}

void	sig_handler(int sign)
{
  if (sign == SIGUSR1)
    my_writer(1);
  else if (sign == SIGUSR2)
    my_writer(0);
}

void	my_sig()
{
  if (signal(SIGUSR1, sig_handler) == SIG_ERR)
    {
      my_puterror("Error\n");
      exit(0);
    }
  if (signal(SIGUSR2, sig_handler) == SIG_ERR)
    {
      my_puterror("Error\n");
      exit(0);
    }
}

int	main(int argc, char **argv)
{
  if (argc != 1 && argv[0] != '\0')
    {
      my_puterror("WRANG PARAM : NEED 1\n");
      exit(0);
    }
  my_sig();
  server();
  while (42)
    {
      pause();
    }
}
