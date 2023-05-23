NAME                    = phonebook

SRC_FILES               = Phonebook.cpp Contact.cpp main.cpp

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
				$(CXX) $(CXXFLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp
				$(CXX) $(CXXFLAGS) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
				@rm -rfv $(OBJ)

fclean: clean
				@rm -rfv $(NAME)

re: fclean all

run: $(NAME)
				@./$(NAME)

.PHONY: run re fclean clean all