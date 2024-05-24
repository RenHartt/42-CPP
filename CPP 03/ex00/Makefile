# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makfefile                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bgoron <bgoron@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/23 16:34:45 by bgoron            #+#    #+#              #
#    Updated: 2024/05/23 16:37:05 by bgoron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ClapTrap
SRCS = main.cpp ClapTrap.cpp
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