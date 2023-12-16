NAME = PhoneBook
CC = c++
RM = rm -rf

SRC =  Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Werror -Wextra -std=c++98

all: $(NAME)

$(NAME): $(OBJ) Contact.hpp PhoneBook.hpp
	@$(CC) $(FLAGS) -o $@ $(OBJ)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

