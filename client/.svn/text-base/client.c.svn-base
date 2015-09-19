/*
** client.c for minitalk in /home/perinp_r//new_projet/minitalk/client
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 11:36:34 2013 ravivarman perinpanathan
** Last update Sat May  4 18:20:08 2013 ravivarman perinpanathan
*/

#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include "client.h"

int		son(int server_pid, char msg)
{
  char		i;

  i = 0;
  while (i < 8)
    {
      usleep(2500);
      if (((msg >> i) & 1) == 1)
	{
	  if (kill(server_pid, SIGUSR1) == -1)
	    {
	      my_puterror("Error\n");
	      exit(0);
	    }
	}
      else
	if (kill(server_pid, SIGUSR2) == -1)
	  {
	    my_puterror("Error\n");
	    exit(0);
	  }
      i++;
    }
  return (0);
}

int		client(char **argv)
{
  int		j;
  int		server_pid;
  char		*msg;

  server_pid = my_getnbr(argv[1]);
  msg = argv[2];
  j = 0;
  while (msg[j] != '\0')
    {
      son(server_pid, msg[j]);
      j++;
    }
  son(server_pid, msg[j]);
  return (0);
}

void		sig_handler(int	sig)
{
  sig = sig;
}

int		main(int argc, char **argv)
{
  if (argc == 3)
    {
      if (signal(SIGUSR1, sig_handler) == SIG_ERR)
	{
	  my_puterror("Error Signal\n");
	  exit(0);
	}
      if (signal(SIGUSR2, sig_handler) == SIG_ERR)
	{
	  my_puterror("Error Signal\n");
	}
      client(argv);
    }
  else
    {
      my_puterror("\t\tSORRY FEW ARGUMENTS.\n");
      my_puterror("PLEASE ENTER THE [SERVER PID] AND THE [MESSAGE] YOU WANT TO SEND.\n");
      exit(0);
    }
  return (0);
}
