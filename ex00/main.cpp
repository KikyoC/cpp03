#include "ClapTrap.hpp"

int main(void)
{
	std::string name = "Iron";
	ClapTrap trap(name);
	
	trap.takeDamage(4);
	
	ClapTrap cpy = trap;

	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);
	trap.beRepaired(1);

	ClapTrap otherCpy(cpy);

	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	cpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
	otherCpy.beRepaired(4);
}
