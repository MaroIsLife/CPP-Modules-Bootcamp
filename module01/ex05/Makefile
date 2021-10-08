SRC = main.cpp Karen.cpp
CC = clang++ -std=c++98

all: karen

karen:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o karen
clean :
	@rm -rf karen.o
fclean : clean
		@rm -rf ./karen karen.dSYM
re : fclean all