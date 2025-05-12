# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scavalli <scavalli@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/12 18:53:03 by scavalli          #+#    #+#              #
#    Updated: 2025/05/12 18:54:56 by scavalli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
NAME=zombie
CC=c++ -std=c++98
CFLAGS=-Wall -Wextra -Werror
SRCS = $(FILE)
OBJS = ${SRCS:.cpp=.o}

.PHONY: all clean fclean re

all : $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)\

re : fclean all