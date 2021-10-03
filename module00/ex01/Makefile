SRC = phonebook.cpp contact.cpp
CC = clang++

all: phonebook

phonebook:
	@$(CC) $(SRC) -Wall -Wextra -Werror -g -fsanitize=address -o phonebook
clean :
	@rm -rf phonebook.o
fclean : clean
		@rm -rf ./phonebook phonebook.dSYM
re : fclean all