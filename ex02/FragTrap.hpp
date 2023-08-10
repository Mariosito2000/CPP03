#pragma once
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:

/*---CONS/DES---*/

	FragTrap();
	~FragTrap();

	FragTrap(FragTrap &);
	FragTrap(std::string);

/*---MEMBER FUNCTIONS---*/

	void			highFivesGuys();

/*---OPERATOR---*/

	FragTrap & operator = (const FragTrap &);

};

#endif