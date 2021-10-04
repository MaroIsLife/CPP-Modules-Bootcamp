SRC = main.cpp
CC = clang++ -std=c++98

all: Brain

Brain:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o Brain
clean :
	@rm -rf Brain.o
fclean : clean
		@rm -rf ./Brain Brain.dSYM
re : fclean all