# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 15:54:40 by matle-br          #+#    #+#              #
#    Updated: 2024/11/04 12:51:54 by matle-br         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
GREEN = \033[32m
RM = rm -f
ROUGE = \033[1;31m

SRC_DIR =	src/main.cpp \
			src/Bureaucrat.cpp \
			src/AForm.cpp \
			src/ShrubberyCreationForm.cpp \
			src/PresidentialPardonForm.cpp \
			src/RobotomyRequestForm.cpp \
			src/Intern.cpp \


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
