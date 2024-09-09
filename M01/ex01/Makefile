NAME = zombie
FLAGS = -Wall -Wextra -Werror
CC = c++

SRCS = main.cpp \
		Announce.cpp \
		zombieHorde.cpp \
		Zombie.cpp

		

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
	
%.o: %.cpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re