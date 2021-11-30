SRC = main.cpp
CC = clang++ -std=c++98

all: find

find:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o find
clean :
	@rm -rf find.o
fclean : clean
		@rm -rf ./find find.dSYM
re : fclean all