# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 10:03:57 by matle-br          #+#    #+#              #
#    Updated: 2024/11/19 11:44:23 by matle-br         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = mutant

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g3
GREEN = \033[32m
RM = rm -f
ROUGE = \033[1;31m

SRC_DIR =	src/main.cpp \

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
