NAME = zombie
FLAGS = -Wall -Wextra -Werror

SRCS = 



OBJS = $(SRCS:.c=.o)


all: $(NAME)


$(NAME): $(OBJS)
	c++98 $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.c
	c++98 $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re