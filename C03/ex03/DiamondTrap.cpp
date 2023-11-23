#include "DiamondTrap.hpp"
DiamondTrap :: DiamondTrap(){
    std::cout<<"DiamondTrap Default constructor called"<<std::endl;
}
DiamondTrap :: ~DiamondTrap(){
    std::cout<<"DiamondTrap Default destructor called"<<std::endl;
}
DiamondTrap :: DiamondTrap(const DiamondTrap &oobj){
    std::cout <<"DiamondTrap Copy constructor called"<< std::endl;
    (*this) = oobj;
}
DiamondTrap &DiamondTrap :: operator=(const DiamondTrap &oobj){
    std::cout <<"DiamondTrap Copy assignment operator called"<<std::endl;
    this->Name = oobj.Name;
    this->Hit_point = oobj.Hit_point;
    this->Attack_damage = oobj.Attack_damage;
    this->Energy_point = oobj.Energy_point;
    return(*this);
}
DiamondTrap :: DiamondTrap(std :: string name) : ClapTrap(name + "_clap_name"),FragTrap(name),ScavTrap(name){
    std::cout<<"DiamondTrap Parametrised constructor called"<<std::endl;
    this->Name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 30;
}

void DiamondTrap :: whoAmI(){
    std::cout<<"DiamondTrap name is "<< Name << std::endl;
    std::cout<<"ClapTrap name is "<< ClapTrap::Name << std::endl;
}