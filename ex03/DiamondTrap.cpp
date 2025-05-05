#include "DiamondTrap.hpp"
#include <ClapTrap.hpp>
#include <FragTrap.hpp>
#include <ScavTrap.hpp>
#include <iostream>

DiamondTrap::DiamondTrap(std::string &name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->hp = 100;
	this->ep = 50;
	this->ad = 30;
}

DiamondTrap::DiamondTrap(DiamondTrap &cpy): ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	this->name = cpy.name;
	this->hp = cpy.hp;
	this->ep = cpy.ep;
	this->ad = cpy.ad;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &cpy)
{
	std::cout << "DiamondTrap: Assign constructor called" << std::endl;
	if (this != &cpy)
	{
		this->name = cpy.name;
		this->ep = cpy.ep;
		this->hp = cpy.hp;
		this->ad = cpy.ad;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
	FragTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << ClapTrap::name << ", DiamondTrap name: " << this->name << std::endl;
}
