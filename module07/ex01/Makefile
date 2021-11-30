SRC = main.cpp
CC = clang++ -std=c++98

all: iter

iter:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o iter
clean :
	@rm -rf iter.o
fclean : clean
		@rm -rf ./iter iter.dSYM
re : fclean all