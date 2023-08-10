#include "ScavTrap.hpp"

/*---CONS/DES---*/

ScavTrap::ScavTrap()
{
	_name = "Scavy";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap default destructor called\n";
}

ScavTrap::ScavTrap(ScavTrap &a)
{
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	std::cout << "ScavTrap copy constructor called\n";
}

ScavTrap::ScavTrap(std::string newName)
{
	_name = newName;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap name constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

void	ScavTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy\n";
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no HP\n";
		return;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << _name << " hits "
		<< target << ", causing " << _attackDamage << " points of damage\n";
}

void	ScavTrap::guardGate()
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " is out of energy\n";
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " has no HP\n";
		return;
	}
	std::cout << "ScavTrap " << _name << " is now guarding the gate\n";
}

/*---OPERATOR---*/

ScavTrap & ScavTrap::operator = (const ScavTrap &a)
{
	this->_name = a._name;
	this->_attackDamage = a._attackDamage;
	this->_energyPoints = a._energyPoints;
	this->_hitPoints = a._hitPoints;

	return (*this);
}