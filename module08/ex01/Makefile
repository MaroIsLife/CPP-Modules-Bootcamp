SRC = main.cpp Span.cpp
CC = clang++ -std=c++98

all: span

span:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o span
clean :
	@rm -rf span.o
fclean : clean
		@rm -rf ./span span.dSYM
re : fclean all