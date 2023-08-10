#include "ClapTrap.hpp"
int	main()
{
	ClapTrap Manolo("Manolo");
	ClapTrap Mike("Maik");

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
	Mike.takeDamage(11);
	Mike.attack("Manolo");
	Mike.beRepaired(1);
	Mike.takeDamage(1);

//Energy waste
	std::cout << "\nEnergy waste\n\n";
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//1
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//2
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//3
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//4
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//5
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//6
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//7
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//8
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//8
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//10
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//11
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//12
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//13
	Manolo.takeDamage(1);
	Manolo.beRepaired(1);	//14
}