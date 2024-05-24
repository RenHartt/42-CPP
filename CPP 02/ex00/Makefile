# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/20 12:06:36 by bgoron            #+#    #+#              #
#    Updated: 2024/05/21 15:59:27 by bgoron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed
SRCS = Fixed.cpp main.cpp
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