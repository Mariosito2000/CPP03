#pragma once
#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:

	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;

public:

/*---CONS/DES---*/

	ClapTrap();
	~ClapTrap();

	ClapTrap(ClapTrap &);
	ClapTrap(std::string);

/*---MEMBER FUNCTIONS---*/

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

/*---OPERATOR---*/

	ClapTrap & operator = (const ClapTrap &);

};


#endif