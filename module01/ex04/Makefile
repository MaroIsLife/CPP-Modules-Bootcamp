SRC = main.cpp
CC = clang++ -std=c++98

all: replace

replace:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o replace
clean :
	@rm -rf replace.o
fclean : clean
		@rm -rf ./replace replace.dSYM
re : fclean all