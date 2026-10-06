##
## EPITECH PROJECT, 2026
## cat Makefile
## File description:
## Makefile
##

NAME	=	cat
SRC	=	cat.c
OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
