#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string name;

public:

	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	Zombie	*newZombie(std::string name);
	void	announce(void);
	void	randomChump(std::string name);
	Zombie *zombieHorde(int N, std::string name);

};

#endif