NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp PhoneBook.class.cpp Contact.class.cpp
HDRS = PhoneBook.class.hpp Contact.class.hpp

OBJ	= $(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) -c $(FLAGS)  $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HDRS)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
