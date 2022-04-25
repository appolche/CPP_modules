NAME	=	span

CC		=	c++
FLAGS	=	-Wall -Wextra -Werror -g -std=c++98
GCC		=	$(CC) $(FLAGS)

SRCS	=	main.cpp span.cpp
OBJS	=	$(SRCS:.cpp=.o)
HDRS	=	span.hpp

all: $(NAME)

%.o:		%.cpp $(HDRS)
			$(GCC) -c -o $@ $<

$(NAME):	$(OBJS)
			$(GCC) $(OBJS) -o $(NAME)

clean:
			rm $(OBJS)

fclean:		clean
			rm -f $(NAME)

re: fclean all
