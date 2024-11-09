NAME = Scalar
CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
		ScalarConverter.cpp \
		inf.cpp \
		check.cpp \
		char_int.cpp \
		double_float.cpp \

		
	
		



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