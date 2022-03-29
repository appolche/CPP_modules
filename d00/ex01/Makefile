NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98 -g
SRC = main.cpp phonebook.class.cpp Contact.class.cpp
HNAME = phonebook.class.hpp Contact.class.hpp
OBJ	=	$(SRC:.cpp=.o)

%.o: %.cpp
	$(CC) -c $(FLAGS)  $< -o $@

all: $(NAME)

$(NAME): $(OBJ) $(HNAME)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
