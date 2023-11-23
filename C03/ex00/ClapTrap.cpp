#include "ClapTrap.hpp"

ClapTrap :: ClapTrap() {
    std::cout<<"Default constructor called"<<std::endl;
}
ClapTrap :: ClapTrap(const ClapTrap &oobj){
    std::cout <<"Copy constructor called"<< std::endl;
    (*this) = oobj;
}
ClapTrap &ClapTrap :: operator=(const ClapTrap &oobj){
    std::cout <<"Copy assignment operator called"<<std::endl;
    this->Name = oobj.Name;
    this->Hit_point = oobj.Hit_point;
    this->Attack_damage = oobj.Attack_damage;
    this->Energy_point = oobj.Energy_point;
    return(*this);
}
ClapTrap :: ~ClapTrap(){
    std::cout<<"Default destructor called"<<std::endl;
}
ClapTrap :: ClapTrap(std :: string name):Name(name), Hit_point(10),Energy_point(10),Attack_damage(0){
    std::cout<<"Parametrised constructor called"<<std::endl;
}
void ClapTrap :: attack(const std::string& target){
    if(Energy_point <= 0 || Hit_point == 0)
    {
        std::cout<<"ClapTrap "<< Name << " can't attacks"<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<< Name << " attacks " << target << " causing "<< Attack_damage << " points of damage! "<<std::endl;
    Energy_point-=1;
    Attack_damage = 0;
}
void ClapTrap :: beRepaired(unsigned int amount){
    if(Energy_point <=0 || Hit_point == 0)
    {
        std::cout<<"ClapTrap "<< Name << " can't be repaired"<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<< Name << " repairs itself by " << amount << " points "<<std::endl;
    Hit_point+=amount;
    Energy_point-=1;

}
void ClapTrap :: takeDamage(unsigned int amount){
   if(amount > Hit_point || Energy_point <= 0){
        std::cout<<"ClapTrap "<< Name << " can't take damage"<<std::endl;
        return;
   }
   if(Hit_point == 0){
        std::cout<<"ClapTrap "<< Name << " is dead "<<std::endl;
        return;
    }
    std::cout<<"ClapTrap "<< Name << " takes damage by " << amount << " points "<<std::endl;
    Hit_point-=amount;

}
unsigned int  ClapTrap :: getEpoint() const{
    return(this->Energy_point);
}
unsigned int ClapTrap :: getHpoint() const{
    return(this->Hit_point);
}