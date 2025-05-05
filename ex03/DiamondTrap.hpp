#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap: public ScavTrap, public FragTrap
{
	public:
		DiamondTrap(std::string &name);
		DiamondTrap(DiamondTrap &cpy);
		DiamondTrap &operator=(DiamondTrap &cpy);
		~DiamondTrap();

		void attack(const std::string &target);
		void whoAmI();
	private:
		std::string name;
		unsigned int hp;
		unsigned int ep;
		unsigned int ad;
};
