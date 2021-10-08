#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
	std::string filename;
	std::string s1;
	std::string s2;
	std::string string_read;
	int found;

	if (ac != 4)
	{
		std::cout << "Please insert 3 arguments\n";
		exit(0);
	}
	if (av[2][0] == 0 || av[3][0] == 0)
	{
		std::cout << "Please insert a non empty string\n";
		exit(0);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	std::ifstream ifs(filename);	
	std::ofstream ofs(filename + ".replace");
	found = -1;
	while (found == -1)
	{
		// ifs >> string_read;
		// std::cout << string_read << "\n";
		found = string_read.find(s1);
		// std::cout << found << "\n";	
	}
	// string_read.erase(found,string_read.length());
	return (0);
}