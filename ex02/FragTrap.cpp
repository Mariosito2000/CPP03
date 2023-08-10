#include "FragTrap.hpp"

/*---CONS/DES---*/

FragTrap::FragTrap()
{
	_name = "Fraggy";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap default destructor called\n";
}

FragTrap::FragTrap(FragTrap &a)
{
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap::FragTrap(std::string newName)
{
	_name = newName;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap name constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

void	FragTrap::highFivesGuys()
{
	if (_energyPoints == 0)
	{
		std::cout << "FragTrap " << _name << " is out of energy\n";
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " has no HP\n";
		return;
	}
	std::cout << "FragTrap " << _name << " is highfiving everyone\n";
}

/*---OPERATOR---*/

FragTrap & FragTrap::operator = (const FragTrap &a)
{
	this->_name = a._name;
	this->_attackDamage = a._attackDamage;
	this->_energyPoints = a._energyPoints;
	this->_hitPoints = a._hitPoints;

	return (*this);
}