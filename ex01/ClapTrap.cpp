#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string &name)
{
	this->name = name;
	this->ad = 0;
	this->ep = 10;
	this->hp = 10;
	std::cout << "ClapTrap: Primary constructor called for " << name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &cpy)
{
	std::cout << "ClapTrap: Copy constructor called" << std::endl;
	this->name = cpy.name;
	this->ad = cpy.ad;
	this->ep = cpy.ep;
	this->hp = cpy.hp;
}

ClapTrap &ClapTrap::operator=(ClapTrap &cpy)
{
	std::cout << "ClapTrap: Assign operator called" << std::endl;
	if (this != &cpy)
	{
		this->hp = cpy.hp;
		this->name = cpy.name;
		this->ad = cpy.ad;
		this->ep = cpy.ep;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destroyer member called for " << this->name << std::endl;
}

void ClapTrap::attack(const std::string &name)
{
	if (this->ep <= 0 || this->hp <= 0)
	{
		std::cout << "ClapTrap: " << this->name << " can't attack" <<std::endl;
		return ;	
	}
	std::cout << "ClapTrap:" << this->name << " is attacking " << name << std::endl;
	this->ep --;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp < amount)
		this->hp = 0;
	else
		this->hp -= amount;
	std::cout << "ClapTrap: " << this->name << " is taking " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ep <= 0 || this->hp <= 0)
	{
		std::cout << "ClapTrap: " << this->name << " can't be repaired" << std::endl;
		return ;
	}
	std::cout << "ClapTrap: " << this->name << " is been repaired for " << amount << " hp" << std::endl;
	this->hp += amount;
	this->ep --;
}
