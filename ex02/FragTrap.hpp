#pragma once
# include "ClapTrap.hpp"
# include <string>

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string &name);
		FragTrap(FragTrap &cpy);
		FragTrap &operator=(FragTrap &cpy);
		~FragTrap();
		void highFiveGuys(void);

	// private:

};
