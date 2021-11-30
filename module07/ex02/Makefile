SRC = main.cpp
CC = clang++ -std=c++98

all: array

array:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o array
clean :
	@rm -rf array.o
fclean : clean
		@rm -rf ./array array.dSYM
re : fclean all