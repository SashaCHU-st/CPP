NAME = zombie
FLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
		announce.cpp \
		zombieHorde.cpp \
		



OBJS := $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: clean fclean re