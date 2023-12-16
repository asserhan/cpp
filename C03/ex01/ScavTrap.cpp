#include "ScavTrap.hpp"

ScavTrap :: ScavTrap(){
    std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap :: ~ScavTrap(){
    std::cout << "ScavTrap Default destructor called" << std::endl;
}
ScavTrap :: ScavTrap(const ScavTrap &oobj){
    std::cout <<"ScavTrap Copy constructor called"<< std::endl;
    (*this) = oobj;
}
ScavTrap &ScavTrap :: operator=(const ScavTrap &oobj){
    std::cout <<"ScavTrap Copy assignment operator called"<<std::endl;
    this->Name = oobj.Name;
    this->Hit_point = oobj.Hit_point;
    this->Attack_damage = oobj.Attack_damage;
    this->Energy_point = oobj.Energy_point;
    return(*this);
}
ScavTrap ::ScavTrap(std :: string name){
    std::cout<<"ScavTrap Parametrised constructor called"<<std::endl;
    this->Name = name;
    this->Hit_point = 100;
    this->Energy_point = 50;
    this->Attack_damage = 20;
}
void ScavTrap :: attack(const std::string& target){
    if(Energy_point <= 0 || Hit_point == 0)
    {
        std::cout<<"ScavTrap "<< Name << " can't attacks"<<std::endl;
        return;
    }
    std::cout<<"ScavTrap "<< Name << " attacks " << target << " causing "<< Attack_damage << " points of damage! "<<std::endl;
    Energy_point-=1;
    Attack_damage = 0;
}
void ScavTrap :: guardGate()
{
    std::cout<<"ScavTrap is in Gate keeper mode"<<std::endl;
}