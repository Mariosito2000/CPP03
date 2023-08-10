#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
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