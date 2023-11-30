#include "Character.hpp"

Character::Character() :name("Default"){
    std::cout<<"Character Default constructor"<<std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}
Character::Character(std::string const & name) : name(name) {
    std::cout<<"Character"<<name<<"created"<<std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}
Character::~Character(){
    std::cout<<"Character"<<name<<"destroyed"<<std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] !=NULL)
            delete this->inventory[i];   
    }
}
Character::Character(const Character &oobj){
    std::cout<<"Character copy constructor"<<std::endl;
    (*this) = oobj;
}
Character &Character::operator=(const Character &oobj) {
    std::cout<<"Character copy assignment operator"<<std::endl;
    this->name = oobj.name;
    for(int i = 0; i < 4; i++)
        this->inventory[i] = oobj.inventory[i];
    return(*this);
}
void Character::equip(AMateria* m){
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
            std::cout <<" Character "<<this->name<<" equiped "<<m->getType()<<std::endl;
            return;
        }
    }
}
void Character::unequip(int idx){
    if(idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
        {
            std::cout <<" Character "<<this->name<<" unequiped "<<std::endl;
            this->inventory[idx] = NULL;
            return;
        }
    }
}
void Character::use(int idx, ICharacter& target){
    if(idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
        {
            std::cout <<" Character "<<this->name<<" used "<<std::endl;
            this->inventory[idx]->use(target);
            return;
        }
    }
}
std::string const & Character::getName() const{
    return(this->name);
}
