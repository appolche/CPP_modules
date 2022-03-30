NAME = StopTheWar

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HDRS = Weapon.hpp HumanA.hpp HumanB.hpp

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
