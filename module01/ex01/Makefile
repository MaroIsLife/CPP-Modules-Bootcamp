SRC = main.cpp Zombie.cpp ZombieHorde.cpp
CC = clang++ -std=c++98

all: Zombie

Zombie:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o Zombie
clean :
	@rm -rf Zombie.o
fclean : clean
		@rm -rf ./Zombie Zombie.dSYM
re : fclean all