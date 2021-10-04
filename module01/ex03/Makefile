SRC = main.cpp
CC = clang++ -std=c++98

all: weapon

weapon:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o weapon
clean :
	@rm -rf weapon.o
fclean : clean
		@rm -rf ./weapon weapon.dSYM
re : fclean all