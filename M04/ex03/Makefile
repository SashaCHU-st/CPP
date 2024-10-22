NAME = Abstract_class
CC = c++

CFLAGS = -Wall -Wextra -Werror

SRCS = main.cpp \
		Ice.cpp \
		Cure.cpp \
		AMateria.cpp \
		ICharacter.cpp \
		IMaterialSource.cpp \
		Character.cpp \
		MateriaSource.cpp \


	
		



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