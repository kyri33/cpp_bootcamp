NAME = ft_retro

FLAGS = -Wall -Werror -Wextra -lncurses -o

SRC = src/main.cpp src/Game.cpp src/Map.cpp src/GameElement.class.cpp src/Player.class.cpp \
	src/Enemy.class.cpp

all: $(NAME)

$(NAME): $(SRC)
	clang++ $(FLAGS) $(NAME) $(SRC)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all