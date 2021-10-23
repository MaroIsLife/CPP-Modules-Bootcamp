SRC = Animal.cpp Dog.cpp Cat.cpp main.cpp WrongCat.cpp WrongAnimal.cpp
CC = clang++ -std=c++98

all: animal

animal:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o animal
clean :
	@rm -rf animal.o
fclean : clean
		@rm -rf ./animal animal.dSYM
re : fclean all