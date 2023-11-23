#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public :
    ScavTrap();
    ScavTrap(const ScavTrap &oobj);
    ScavTrap &operator=(const ScavTrap &oobj);
    ScavTrap(std :: string name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();



};
#endif
