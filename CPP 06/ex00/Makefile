# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoron <bgoron@42angouleme.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/17 21:52:59 by bgoron            #+#    #+#              #
#    Updated: 2024/07/22 13:45:58 by bgoron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ScalarConverter
SRCS = main.cpp ScalarConverter.cpp GetType.cpp StringTo.cpp PrintType.cpp
FLAGS = -Wall -Wextra -Werror -std=c++98
OBJS_DIR = .objs
OBJS = $(addprefix $(OBJS_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: %.cpp
	mkdir -p $(OBJS_DIR)
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJS_DIR)

re: fclean all

.PHONY: all clean fclean re
.SILENT:
