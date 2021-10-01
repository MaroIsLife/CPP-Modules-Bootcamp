SRC = megaphone.cpp
CC = clang++

all: megaphone

megaphone:
	@$(CC) $(SRC) $(GN) $(LIB) -Wall -Wextra -Werror -o megaphone
clean :
	@rm -rf megaphone.o
fclean : clean
		@rm -rf ./megaphone megaphone.dSYM
re : fclean all