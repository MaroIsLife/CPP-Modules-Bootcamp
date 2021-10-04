SRC = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
CC = clang++ -std=c++98

all: Zombie

Zombie:
	@$(CC) $(SRC) -Wall -Wextra -Werror -g -fsanitize=address -o Zombie
clean :
	@rm -rf Zombie.o
fclean : clean
		@rm -rf ./Zombie Zombie.dSYM
re : fclean all