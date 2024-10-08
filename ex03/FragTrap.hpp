#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:

/*---CONS/DES---*/

	FragTrap();
	virtual ~FragTrap();

	FragTrap(FragTrap &);
	FragTrap(std::string);

/*---MEMBER FUNCTIONS---*/

	void			highFivesGuys();

/*---OPERATOR---*/

	FragTrap & operator = (const FragTrap &);

};

#endif