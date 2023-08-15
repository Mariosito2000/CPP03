#pragma once
#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:

	std::string	_name;

public:

/*---CONS/DES---*/

	DiamondTrap();
	~DiamondTrap();

	DiamondTrap(DiamondTrap &);
	DiamondTrap(std::string);

/*---MEMBER FUNCTIONS---*/

	void	whoAmI();

/*---OPERATOR---*/

	DiamondTrap & operator = (const DiamondTrap &);

};

#endif