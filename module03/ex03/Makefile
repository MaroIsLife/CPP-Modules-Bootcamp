SRC = ClapTrap.cpp main.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
CC = clang++ -std=c++98

all: claptrap

claptrap:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o claptrap
clean :
	@rm -rf claptrap.o
fclean : clean
		@rm -rf ./claptrap claptrap.dSYM
re : fclean all