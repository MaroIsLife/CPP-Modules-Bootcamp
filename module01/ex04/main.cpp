#include <iostream>
#include <string>
#include <fstream>


void check_error(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Please insert 3 arguments\n";
		exit(0);
	}
	if (av[1][0] == 0 || av[2][0] == 0 || av[3][0] == 0)
	{
		std::cout << "Please insert a non empty string\n";
		exit(0);
	}
}

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string string_read;
	int 		found;

	check_error(ac, av);
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream ifs(filename);	
	std::ofstream ofs(filename + ".replace");
	if (ifs == 0 || ofs == 0)
	{
		std::cout << "Error\n";
		exit(0);
	}
	while (getline(ifs, string_read))
	{
		while (1)
		{
			found = string_read.find(s1);
			if (found == -1)
				break ;
			string_read.erase(found, s1.length());
			string_read.insert(found, s2);
		}
		ofs << string_read << std::endl;
	}
	return (0);
}
