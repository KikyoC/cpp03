#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(std::string &name): ClapTrap(name)
{
	std::cout << "FragTrap: Default contructor called for " << name << std::endl;
	this->hp = 100;
	this->ep = 500;
	this->ad = 20;
}

FragTrap::FragTrap(FragTrap &cpy): ClapTrap(cpy)
{
	std::cout << "FragTrap: Copy contructor called for " << cpy.name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap &cpy)
{
	std::cout << "FragTrap: Assign constructor called for " << cpy.name << std::endl; 
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->ep = cpy.ep;
		this->hp = cpy.hp;
		this->ad = cpy.ad;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap: Destructor called";
}

void FragTrap::highFiveGuys()
{
	std::cout << "Hello if you hadn't killed your brother you will be a good person" << std::endl;
}
