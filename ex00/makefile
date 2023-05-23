
NAME	= megaphone
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

#Colors:
YELLOW		=	\e[93;5;226m
RESET		=	"\e[0m"

all: $(NAME)

$(NAME): 
	@echo "$(YELLOW)- Compiling $(NAME)...\n"
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)
	@echo "$(YELLOW)- Executable ready.\n" $(RESET)

clean:
	@echo "- Cleaning..."

fclean: clean
	@$(RM) -v $(NAME)

re: fclean all

run: $(NAME)
				@./$(NAME)

.PHONY: run re fclean clean all