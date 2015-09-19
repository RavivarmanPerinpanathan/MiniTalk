/*
** client.h for client in /home/perinp_r//new_projet/minitalk/client
** 
** Made by ravivarman perinpanathan
** Login   <perinp_r@epitech.net>
** 
** Started on  Thu May  2 11:20:24 2013 ravivarman perinpanathan
** Last update Sat May  4 17:29:32 2013 ravivarman perinpanathan
*/

#ifndef CLIENT_H_
#define CLIENT_H_

# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include <signal.h>

int		expo(int e);
int		my_puterror(char *str);
int		my_strlen(char *str);
int		my_putstr(char *str);
int		my_getnbr(char *str);
int		son(int server_pid, char msq);
void		sig_handler(int sig);
void		my_putchar(char c);

#endif	/* !CLIENT_H_ */
