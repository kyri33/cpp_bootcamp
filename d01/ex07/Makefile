NAME = replace

FLAGS = clang++ -Wall -Werror -Wextra -o

SRC = main.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(FLAGS) $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all