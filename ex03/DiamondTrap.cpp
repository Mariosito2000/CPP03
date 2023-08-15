#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	_name = "Diamondy";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 30;
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap default destructor called\n";
}

DiamondTrap::DiamondTrap(DiamondTrap &a)
{
	_name = a._name;
	ClapTrap::_name = a.ClapTrap::_name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap::DiamondTrap(std::string newName): ClapTrap(newName), ScavTrap(newName), FragTrap(newName)
{
	_name = newName;
	ClapTrap::_name = newName + "_clap_trap";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap name constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << _name << "\nand my ClapTrap name is " << ClapTrap::_name << "\n";
}

/*---OPERATOR---*/

DiamondTrap & DiamondTrap::operator = (const DiamondTrap &a)
{
	ClapTrap::_name = a.ClapTrap::_name;
	_name = a._name;
	_attackDamage = a._attackDamage;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;

	return (*this);
}
