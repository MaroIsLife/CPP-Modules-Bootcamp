SRC = main.cpp Base.cpp
CC = clang++ -std=c++98

all: conv

conv:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o conv
clean :
	@rm -rf conv.o
fclean : clean
		@rm -rf ./conv conv.dSYM
re : fclean all