NAME = form
CC = c++
RM = rm -rf
OBJ_DIR = obj
SRC = Bureaucrat.cpp Form.cpp main.cpp
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
FLAGS = -Wall -Werror -Wextra -std=c++98
HEADERS = Bureaucrat.hpp Form.hpp

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

