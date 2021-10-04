SRC = phonebook.cpp contact.cpp
CC = clang++ -std=c++98

all: phonebook

phonebook:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o phonebook
clean :
	@rm -rf phonebook.o
fclean : clean
		@rm -rf ./phonebook phonebook.dSYM
re : fclean all