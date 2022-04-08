#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap {

    public:
	    ClapTrap();
	    ClapTrap(std::string nameValue);
		ClapTrap(ClapTrap const &rhs);
	    ~ClapTrap();

	    ClapTrap & operator=(ClapTrap const &rhs);

    	void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		int	getDamage() const ;
		int	getEnergy() const ;
		void printAttributes() const;

    protected:
		std::string name;
		int hit_points;
		int energy_points; //Attacking and repairing cost 1 energy point each
		int attack_damage;

};

#endif