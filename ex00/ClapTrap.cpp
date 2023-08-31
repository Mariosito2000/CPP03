#include "ClapTrap.hpp"

/*---CONS/DES---*/

ClapTrap::ClapTrap()
{
	_name = "Joe";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap default destructor called\n";
}


ClapTrap::ClapTrap(ClapTrap &a)
{
	_name = a._name;
	_hitPoints = a._hitPoints;
	_energyPoints = a._energyPoints;
	_attackDamage = a._attackDamage;
	std::cout << "ClapTrap copy constructor called\n";
}

ClapTrap::ClapTrap(std::string newName)
{
	_name = newName;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap name constructor called\n";
}

/*---MEMBER FUNCTIONS---*/

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy\n";
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no HP\n";
		return;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks "
		<< target << ", causing " << _attackDamage << " points of damage\n";
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount < _hitPoints)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " has taken " << amount << " points of damage\n";
	}
	else
	{
		std::cout << "ClapTrap " << _name << " has taken " << _hitPoints << " points of damage\n";
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " is kaput\n";
	}
}
	
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy\n";
		return;
	}
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no HP\n";
		return;
	}
	std::cout << "ClapTrap " << _name << " repaired " << amount << " HP\n";
	_hitPoints += amount;
	_energyPoints--;
}

/*---OPERATOR---*/

ClapTrap & ClapTrap::operator = (const ClapTrap &a)
{
	this->_name = a._name;
	this->_attackDamage = a._attackDamage;
	this->_hitPoints = a._hitPoints;
	this->_energyPoints = a._energyPoints;

	return (*this);
}