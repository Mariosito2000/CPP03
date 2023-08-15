#pragma once
#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:

/*---CONS/DES---*/

	ScavTrap();
	virtual	~ScavTrap();

	ScavTrap(ScavTrap &);
	ScavTrap(std::string);

/*---MEMBER FUNCTIONS---*/

	virtual void	attack(const std::string& target);
	void			guardGate();

/*---OPERATOR---*/

	ScavTrap & operator = (const ScavTrap &);

};


#endif