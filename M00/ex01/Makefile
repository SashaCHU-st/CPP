NAME = phonebook
FLAGS = -Wall -Wextra -Werror

SRCS = PhoneBook.cpp \
		addContact.cpp \
		create.cpp \
		dispay.cpp \
		Contact.cpp \

		

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