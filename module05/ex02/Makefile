SRC = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp
CC = clang++ -std=c++98

all: bureau

bureau:
	@$(CC) $(SRC) -Wall -Wextra -Werror -o bureau
clean :
	@rm -rf bureau.o
fclean : clean
		@rm -rf ./bureau bureau.dSYM
re : fclean all