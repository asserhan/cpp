#include "Character.hpp"

Character::Character() :name("Default"){
    //std::cout<<"Character Default constructor"<<std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}
Character::Character(std::string const & name) : name(name) {
    //std::cout<<" Character "<<name<<" created "<<std::endl;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}
Character::~Character(){
   // std::cout<<" Character "<<name<<" destroyed "<<std::endl;
    this->deleteinventory();
}
Character::Character(Character const &oobj) : name(oobj.getName()){
   // std::cout<<"Character copy constructor"<<std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
            this->inventory[i] = NULL;
        

        this->inventory[i] = oobj.inventory[i]->clone();
    }
}
Character &Character::operator=(Character const &oobj) {
    //std::cout<<"Character copy assignment operator"<<std::endl;
    this->name = oobj.name;
    for(int i = 0; i < 4; i++)
    {
        if (this->inventory[i] != NULL)
        {
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }

        this->inventory[i] = oobj.inventory[i]->clone();
    }
    return(*this);
}
void Character::equip(AMateria* m){
    if(m == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] == NULL)
        {
            this->inventory[i] = m;
           // std::cout <<" Character "<<this->name<<" equiped with "<<m->getType()<<std::endl;
            return;
        }
    }
    std :: cout << " Character "<<this->name<<" inventory is full "<<std::endl;
}
void Character::unequip(int idx){
    if(idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
            delete this->inventory[idx];
        std::cout <<" Character "<<this->name<<" unequiped "<<std::endl;
        this->inventory[idx] = NULL;
        return;
    }
    std :: cout << " Character "<<this->name<<" inventory is empty or wrong index"<<std::endl;
}
void Character::use(int idx, ICharacter& target){
    if(idx >= 0 && idx < 4)
    {
        if (this->inventory[idx] != NULL)
        {
            //std::cout <<" Character "<<this->name<<" used "<<std::endl;
            this->inventory[idx]->use(target);
            return;
        }
    }
    std :: cout << " Character "<<this->name<<" inventory is empty or wrong index"<<std::endl;
}
std::string const & Character::getName() const{
    return(this->name);
}

void Character::deleteinventory(){
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i] !=NULL)
        {
            delete this->inventory[i];  
            this->inventory[i] = NULL; 
        }
    }
}