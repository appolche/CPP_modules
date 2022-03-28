NAME = megaphone

INCLUDES = ./

SRCS = ./megaphone.cpp

OBJ = $(SRCS:%.cpp=%.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ -o $(NAME) $(OBJ)

%.o: %.c 
	clang++ -c $(FLAGS) -I $(INCLUDES) $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean flean re