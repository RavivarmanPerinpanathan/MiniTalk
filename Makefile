##
## Makefile for minitalk in /home/perinp_r//new_projet/minitalk
## 
## Made by ravivarman perinpanathan
## Login   <perinp_r@epitech.net>
## 
## Started on  Tue Apr 30 12:08:00 2013 ravivarman perinpanathan
## Last update Sat May  4 18:24:40 2013 ravivarman perinpanathan
##

NAME_SERVER =	./server/server

NAME_CLIENT =	./client/client

SRCS_SERVER =	./server/server.c \
		./server/allfonc.c \
		./server/putnbr.c \

SRCS_CLIENT =	./client/client.c \
		./client/allfonc.c \
		./client/getnbr.c \

CC =		gcc

CFLAGS =	-W -Wall -Wextra -pedantic -I. -L.

RM =		rm -f

OBJS_SERVER =	$(SRCS_SERVER:.c=.o)
OBJS_CLIENT =	$(SRCS_CLIENT:.c=.o)

all:		$(NAME_SERVER) $(NAME_CLIENT)

$(NAME_SERVER):
		$(CC) -o $(NAME_SERVER) $(SRCS_SERVER) $(CFLAGS)

$(NAME_CLIENT):
		$(CC) -o $(NAME_CLIENT) $(SRCS_CLIENT) $(CFLAGS)


clean:
		$(RM) $(OBJS_SERVER) $(OBJS_CLIENT) 

fclean:		clean
		$(RM) $(NAME_SERVER) $(NAME_CLIENT)

re:		fclean all
