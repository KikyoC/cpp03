#pragma once

#include <string>
class ClapTrap{

	public:

		ClapTrap(std::string &name);
		ClapTrap(ClapTrap &cpy);
		ClapTrap &operator=(ClapTrap &cpy);
		~ClapTrap();
		
		void attack(const std::string &name);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	protected:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
};
