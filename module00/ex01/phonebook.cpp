#include "contact.hpp"
#include "phonebook.hpp"

void check_length(std::string *test)
{
	if (test->length() > 10)
	{
		*test = test->substr(0,10);
		test[0][9] = '.';
	}
}

bool is_number(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	if (isdigit(str[i]) == false)
	  return false;
	return true;
}

void	print_search_all(Contact *abc, int b, Phonebook *ph)
{
	std::cout << "|";
	ph->print_search("instance", abc, b);
	ph->print_search("first_name", abc, b);
	ph->print_search("last_name", abc, b);
	ph->print_search("nickname", abc, b);
	std::cout << "\n";
}


void Phonebook::print_search(std::string str, Contact *abc, int i)
{
	std::string str1 = "          "  + abc->get_var(str, i);
	std::cout << str1.substr(abc->get_var(str, i).length(), 100) << "|";
}

std::string Phonebook::read()
{
	std::string cmd;

	std::cout << "---------\n";
	std::cout << "Commands:\n";
	std::cout << "*ADD\n*SEARCH\n*EXIT\n";
	std::cout << "---------\n";
	std::cout << "> ";
	std::cin >> cmd;
	return (cmd);
}


void Phonebook::search(Contact *abc)
{
	int 				i;
	int 				b;
	int					a1;

	std::cout << "|-------------------------------------------|\n";
	std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
	std::cout << "|-------------------------------------------|\n";
	if (abc->c > 0)
	{
		b = 0;
		while (b < abc->c)
		{
			print_search_all(abc, b, this);
			b++;
		}
	}
	while (1)
	{
		std::string			c;

		std::cout << "Index > ";
		std::cin >> c;

		if (is_number(c) == true)
			a1 = std::stoi(c);
		else
		{
			std::cout << "Please Insert a number\n";
			continue ;
		}
		break ;
	}
	if (a1 > abc->c - 1)
		std::cout << "Invalid Index\n";
	else
	{
		std::cout << "|-------------------------------------------|\n";
		print_search_all(abc, a1, this);
		std::cout << "|-------------------------------------------|\n";
	}
}

void Phonebook::add(Contact *abc)
{
	std::string test;


	std::cout << "Enter the First Name: ";
	std::cin >> test;
	check_length(&test);
	abc->set_var("first_name", test ,abc->instance);
	std::cout << "Enter the Last Name: ";
	std::cin >> test;
	check_length(&test);
	abc->set_var("last_name", test ,abc->instance);
	std::cout << "Enter the Nickname: ";
	std::cin >> test;
	check_length(&test);
	abc->set_var("nickname", test ,abc->instance);
	std::cout << "Enter the Phone Number: ";
	std::cin >> test;
	check_length(&test);
	abc->set_var("phone_number", test ,abc->instance);
	std::cout << "Enter the Darkest Secret: ";
	std::cin >> test;
	check_length(&test);
	abc->set_var("darkest_secret", test ,abc->instance);
	abc->instance++;
	if (abc->instance == 8)
		abc->instance = 0;
	if (abc->c == 8)
		abc->c = 8;
	else
		abc->c++;
}
