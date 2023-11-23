NAME = FragTrap
CC = c++
RM = rm -rf
OBJ_DIR = obj
SRC =  ClapTrap.cpp FragTrap.cpp main.cpp
OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ) ClapTrap.hpp FragTrap.hpp
	$(CC) $(FLAGS) $(OBJ) -o $@ 

$(OBJ_DIR)/%.o: %.cpp ClapTrap.cpp FragTrap.hpp
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

