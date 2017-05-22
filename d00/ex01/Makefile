NAME = phonebook

FLAGS = clang++ -Wall -Werror -Wextra -o

SRC = main.cpp Contact.class.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(FLAGS) $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all