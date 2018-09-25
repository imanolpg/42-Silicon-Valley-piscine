
NAME =	eval_expr

HEADER = ./includes/

SRC = main.c library.c secondlibrary.c

all: 
	gcc -Wall -Wextra -Werror -I$(HEADER) -o $(NAME) $(SRC)

clean: 
	/bin/rm -f $(NAME)

fclean:
	/bin/rm -f $(NAME)

re: fclean all
