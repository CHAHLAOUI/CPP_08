CC		= c++
NAME	= easyfind
HEADS	= easyfind.hpp
SRCS	= main.cpp
OBJS	= $(SRCS:.cpp=.o)
CFLAGS	= -Wall -Werror -Wextra -std=c++98

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

%.o		: %.cpp $(HEADS)
	$(CC) $(CFLAGS) -c $< -o $@ 

clean	:
	$(RM) $(OBJS)

fclean	: clean
	$(RM) $(NAME)

re		: fclean all 

.PHONY	: clean