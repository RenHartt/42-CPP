# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 13:25:45 by bgoron            #+#    #+#              #
#    Updated: 2024/05/14 14:18:02 by bgoron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = PhoneBook.cpp \
Contact.cpp \
main.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME) : $(OBJS)
	$(CC) $(CLAGS) $(OBJS) -o $(NAME)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

all: $(NAME)

.PHONY: all clean fclean re
.SILENT: