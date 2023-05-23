NAME		= account

SRC_FILES		= Account.cpp tests.cpp

SRC_DIR                 = ./src/
INC_DIR                 = ./includes/

SRC                             =  $(SRC_FILES)
OBJ                             = $(SRC_FILES:.cpp=.o)
OBJ_DIR					= ./

CXX                             = c++
CFLAGS                  = -Wall -Werror -Wextra
CXXFLAGS                = -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(YELLOW) \n"
	$(CXX) $(CXXFLAGS) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Executable $(NAME) is ready !!" $(RESET)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
	@echo "$(YELLOW)- Compiling ..." $(RESET)
	$(CXX) $(CXXFLAGS) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
				@rm -rfv $(OBJ)

fclean: clean
				@rm -rfv $(NAME)

re: fclean all

run: $(NAME)
				@./$(NAME)

.PHONY: run re fclean clean all

#Colors:
YELLOW		=	\e[93;5;226m
RESET		=	"\e[0m"