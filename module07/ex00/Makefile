SRC = main.cpp
CC = clang++ -std=c++98

all: whatever

whatever:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o whatever
clean :
	@rm -rf whatever.o
fclean : clean
		@rm -rf ./whatever whatever.dSYM
re : fclean all