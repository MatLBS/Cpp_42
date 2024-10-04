NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
GREEN = \033[32m
RM = rm -f
ROUGE = \033[1;31m

SRC_DIR = megaphone.cpp

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
