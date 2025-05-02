#pragma once
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
	public:
		ScavTrap(std::string &name);
		ScavTrap(ScavTrap &cpy);
		ScavTrap &operator=(ScavTrap &cpy);
		~ScavTrap();

		void guardGate();
		void attack(const std::string &name);
	private:
		bool guards;
};
