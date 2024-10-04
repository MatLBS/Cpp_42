# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 11:13:41 by matle-br          #+#    #+#              #
#    Updated: 2024/09/23 13:50:27 by matle-br         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = horde_zombie

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
GREEN = \033[32m
RM = rm -f
ROUGE = \033[1;31m

SRC_DIR = src/main.cpp src/zombieHorde.cpp src/Zombie.cpp\

all: $(NAME)

$(NAME) : $(SRC_DIR)
	@$(CC) $(FLAGS) $(SRC_DIR) -o $(NAME)
	@echo "$(GREEN)cpp compiled!$(RESET)"

clean :
	@$(RM) $(OBJS)

fclean : clean
	@$(RM) $(NAME)
	@echo "$(ROUGE)Fclean is running..."

re : fclean all

.PHONY: all clean fclean re
