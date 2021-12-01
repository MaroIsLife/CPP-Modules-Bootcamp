SRC = main.cpp MutantStack.cpp
CC = clang++ -std=c++98

all: mutant

mutant:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o mutant
clean :
	@rm -rf mutant.o
fclean : clean
		@rm -rf ./mutant mutant.dSYM
re : fclean all