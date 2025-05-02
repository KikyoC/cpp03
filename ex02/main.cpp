#include <FragTrap.hpp>

int main(void)
{
	std::string name = "emerald";

	FragTrap trap(name);
	trap.attack("IDK who I am");
	trap.takeDamage(30);
	for (int i = 0; i < 30; i++)
		trap.beRepaired(1);

	trap.highFiveGuys();
	FragTrap cpy = trap;
	cpy.beRepaired(1);
	cpy.highFiveGuys();
}
