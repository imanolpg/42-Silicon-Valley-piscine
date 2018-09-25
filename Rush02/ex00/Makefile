# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bbixby <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/08 10:46:19 by bbixby            #+#    #+#              #
#    Updated: 2018/07/08 14:11:02 by bbixby           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2

SRC = main.c

FLAGS = gcc -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	$(FLAGS) $(SRC) helpers.c box.c -o $(NAME)
	$(FLAGS) rush00.c helpers.c -o rush-00
	$(FLAGS) rush01.c helpers.c -o rush-01
	$(FLAGS) rush02.c helpers.c -o rush-02
	$(FLAGS) rush03.c helpers.c -o rush-03
	$(FLAGS) rush04.c helpers.c -o rush-04
  
clean:
	/bin/rm -f $(NAME) rush-00 rush-01 rush-02 rush-03 rush-04

fclean: clean
	/bin/rm -f

re: fclean all


