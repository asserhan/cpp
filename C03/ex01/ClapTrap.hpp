#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP
#include <iostream>

class ClapTrap{
    protected:
        std::string Name;
        unsigned int Hit_point;
        unsigned int Energy_point;
        unsigned int Attack_damage;
    public:
    //Canonical form
    ClapTrap();
    ClapTrap(const ClapTrap &oobj);
    ClapTrap &operator=(const ClapTrap &oobj);
    ~ClapTrap();
    //Parametrised constructor
    ClapTrap(std :: string name);
     void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    //getters
    unsigned int getEpoint() const;
    unsigned int getHpoint() const;
     unsigned int getDpoint() const;
    
};
#endif