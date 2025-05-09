#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string &name): ClapTrap(name)
{
	std::cout << "ScavTrap: Default contructor called for " << name << std::endl;
	this->hp = 100;
	this->ep = 500;
	this->ad = 20;
	this->guards = false;
}

ScavTrap::ScavTrap(ScavTrap &cpy): ClapTrap(cpy)
{
	std::cout << "ScavTrap: Copy contructor called for " << cpy.name << std::endl;
	this->guards = false;
}

ScavTrap &ScavTrap::operator=(ScavTrap &cpy)
{
	std::cout << "ScavTrap: Assign operator called for " << cpy.name << std::endl; 
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->guards = cpy.guards;
		this->ep = cpy.ep;
		this->hp = cpy.hp;
		this->ad = cpy.ad;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called";
}

void ScavTrap::guardGate()
{
	if (this->guards)
	{
		this->guards = false;
		std::cout << "ScavTrap: Disabling guards for " << this->name << std::endl;
	}
	else
	{
		this->guards = true;
		std::cout << "ScavTrap: Enabling guards for " << this->name << std::endl;
	}
}

void ScavTrap::attack(const std::string &name)
{
	if (this->ep <= 0 || this->hp <= 0)
	{
		std::cout << "ScavTrap: " << this->name << " can't attack" <<std::endl;
		return ;	
	}
	std::cout << "ScavTrap: " << this->name << " is attacking " << name << std::endl;
	this->ep --;
}
