NAME = phonebook
FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = phonebook.cpp



OBJS = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	c++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re