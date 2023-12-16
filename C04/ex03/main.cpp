#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(int ac,char *argv[])
{
    (void )argv;
    if(ac == 1)
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        //me->unequip(3);
        
        ICharacter* bob = new Character("bob");
        
        me->use(0, *bob);
        me->use(1, *bob);
        
        delete bob;
        delete me;
        delete src;
    }
    else 
    {
        std::cout <<"Wrong argument"<<std::endl;
        return(1);
    }
    return 0;
}
