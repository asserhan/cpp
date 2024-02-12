NAME = RPN
CC = c++
RM = rm -rf
OBJ_DIR = obj
SRC = RPN.cpp main.cpp
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
FLAGS = -Wall -Werror -Wextra -std=c++98 -g -fsanitize=address
HEADERS = RPN.hpp

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	$(CC) $(FLAGS) $(OBJ) -o $@ 

$(OBJ_DIR)/%.o: %.cpp $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

