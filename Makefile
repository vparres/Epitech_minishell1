##
## Makefile for minishell1 in /home/tails/Epikek/Git/PSU/PSU_2016_minishell1
##
## Made by Miles PROWER
## Login   <tails@epitech.net>
##
## Started on  Wed Jan 11 14:46:03 2017 Miles PROWER
## Last update Tue Feb 21 15:29:17 2017 Miles PROWER
##

NAME		= 	mysh

CC		= 	gcc

CFLAGS		=	-Iinclude

LDFLAGS		=

SRC		= 	src/minishell1.c		\
			src/exec.c			\
			src/prompt.c			\
			src/exit.c			\
			src/envinit.c			\
			src/cd.c			\
			src/libtails/my_printf.c	\
			src/libtails/my_printfct.c	\
			src/libtails/my_put_nbr.c	\
			src/libtails/my_putchar.c	\
			src/libtails/my_strncpy.c	\
			src/libtails/my_realloc.c	\
			src/libtails/my_strcpy.c	\
			src/libtails/my_strcmp.c	\
			src/libtails/my_strncmp.c	\
			src/libtails/my_strcat.c	\
			src/libtails/my_zero.c		\
			src/libtails/tabtools.c		\
			src/libtails/get_next_line.c	\
			src/libtails/my_strlen.c

OBJ		= 	$(SRC:.c=.o)

all : 			$(NAME)

$(NAME):		$(OBJ)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
			rm -f $(OBJ)

fclean: 		clean
			rm -f $(NAME)

re: 			fclean all

.PHONY: 		re clean fclean all
