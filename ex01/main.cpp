#include "ScavTrap.hpp"

int main(void)
{
	std::string name = "Gold";
	
	ScavTrap trap(name);

	trap.attack("IDK who I am");
	trap.takeDamage(30);
	for (int i = 0; i < 30; i++)
		trap.beRepaired(1);

	trap.guardGate();
	ScavTrap cpy = trap;
	cpy.beRepaired(1);
	cpy.guardGate();
	cpy.guardGate();
	trap.guardGate();
}
