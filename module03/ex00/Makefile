SRC = ClapTrap.cpp ClapTrap.hpp main.cpp
CC = clang++ -std=c++98

all: fixed

fixed:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o fixed
clean :
	@rm -rf fixed.o
fclean : clean
		@rm -rf ./fixed fixed.dSYM
re : fclean all