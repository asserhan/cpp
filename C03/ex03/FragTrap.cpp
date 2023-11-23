#include "FragTrap.hpp"

FragTrap :: FragTrap(){
    std::cout << "FragTrap Default constructor called" << std::endl;
}
FragTrap :: ~FragTrap(){
    std::cout << "FragTrap Default destructor called" << std::endl;
}
FragTrap :: FragTrap(const FragTrap &oobj){
    std::cout <<"FragTrap Copy constructor called"<< std::endl;
    (*this) = oobj;
}
FragTrap &FragTrap :: operator=(const FragTrap &oobj){
    std::cout <<"FragTrap Copy assignment operator called"<<std::endl;
    this->Name = oobj.Name;
    this->Hit_point = oobj.Hit_point;
    this->Attack_damage = oobj.Attack_damage;
    this->Energy_point = oobj.Energy_point;
    return(*this);
}
FragTrap ::FragTrap(std :: string name){
    std::cout<<"FragTrap Parametrised constructor called"<<std::endl;
    this->Name = name;
    this->Hit_point = 100;
    this->Energy_point = 100;
    this->Attack_damage = 30;
}
void FragTrap :: attack(const std::string& target){
    if(Energy_point <= 0 || Hit_point == 0)
    {
        std::cout<<"FragTrap "<< Name << " can't attacks"<<std::endl;
        return;
    }
    std::cout<<"FragTrap "<< Name << " attacks " << target << " causing "<< Attack_damage << " points of damage! "<<std::endl;
    Energy_point-=1;
    Attack_damage = 0;
}
void FragTrap :: highFivesGuys(void){
    std::cout<<"High five players"<<std::endl;
}

unsigned int FragTrap :: getDpoint() const{
    return(this->Attack_damage);
}