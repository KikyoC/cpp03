#include "DiamondTrap.hpp"
#include <string>

int main(void)
{
	std::string name = "Diamond";
	std::string victim = "Iron";
	DiamondTrap trap(name);
	
	trap.attack(victim);
}
