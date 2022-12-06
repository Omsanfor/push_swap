.PHONY: all clean fclean re help
CC = gcc
NAME=push_swap
FLAGS = -Wall -Wextra -Werror -c
SRCS=	./libft/ft_atoi.c 		\
		./libft/ft_isdigit.c	\
		./libft/ft_strlcpy.c	\
		./libft/ft_strlen.c 	\
		./libft/ft_split.c		\
		./libft/ft_substr.c		\
		./rules/rule_p.c		\
		./rules/rule_r.c 		\
		./rules/rule_rr.c 		\
		./rules/rule_s.c		\
		./utils/sort_utils.c 	\
		./utils/sort.c			\
		./utils/utils_1.c		\
		./utils/utils_2.c		\
		./utils/argc.c			\
		push_swap.c 
OBJ=$(SRCS:.c=.o)

GREEN = \033[0;32m
RESET = \033[0m
BLUE = \033[0;44m
RED = \033[0;31m
YELLOW = \033[0;33m

all: $(SRCS) $(NAME)
	@echo "$(GREEN)Done$(RESET)"

$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $@
	@echo "$(RED)Create push_swap$(RESET)"
	@sleep 1s
	@clear

.c.o:
	@$(CC) $(FLAGS) $< -o $@
	@echo "$(BLUE)Create object$(RESET) - $(GREEN)$@ $(RESET)"

clean:
	@rm -rf $(OBJ)
	@echo "$(YELLOW)Delete objects$(RESET)"
	@sleep 1s
	@clear

fclean: clean
	@rm -rf $(NAME)
	@echo "$(RED)Delete push_swap$(RESET)"
	@sleep 1s
	@clear
re: fclean all

help: 
	@echo "all clean fclean re "
	