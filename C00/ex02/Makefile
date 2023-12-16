NAME = Account
CC = c++
RM = rm -rf

SRC =  Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ) Account.hpp
	@$(CC) $(FLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

