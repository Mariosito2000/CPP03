#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	FragTrap Fragy("Frrrraaggy");
	ScavTrap Manolo("Manolo");
	ScavTrap Mike("Maik");
	ScavTrap Iker("Iker");

//Attack
	std::cout << "\nAttack\n\n";
	Manolo.attack("Maik");

//Take dmg
	std::cout << "\nTake dmg\n\n";
	Mike.takeDamage(2);
	Mike.takeDamage(1);

//Repair
	std::cout << "\nRepair\n\n";
	Mike.beRepaired(3);
	Mike.beRepaired(1);

//Kaput
	std::cout << "\nKaput\n\n";
	Mike.takeDamage(110);
	Mike.attack("Manolo");
	Mike.beRepaired(1);
	Mike.takeDamage(1);

//Energy waste
	std::cout << "\nEnergy waste\n\n";
	for (int i = 0; i < 50; i++)
	{
		Manolo.takeDamage(1);
		Manolo.beRepaired(1);
	}

//Gate
	std::cout << "\nGate keeping\n\n";
	Iker.guardGate();
	Manolo.guardGate();
	Mike.guardGate();

//Highfive
	std::cout << "\nHighfive\n\n";
	Fragy.highFivesGuys();

	return (0);
}