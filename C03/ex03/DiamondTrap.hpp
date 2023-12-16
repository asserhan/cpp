#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
class DiamondTrap :public FragTrap,public ScavTrap{
    private:
    std::string Name;
    public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap &oobj);
    DiamondTrap &operator=(const DiamondTrap &oobj);
    void whoAmI();

    void attack(const std::string& target);


};
#endif