#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    std::cout <<"here"<<std::endl;
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    return 0;
}
// MateriaSource default constructor called.
// AMateria type constructor called.
// Ice default constructor called.
// MateriaSource learned the ice materia recipe.
// AMateria type constructor called.
// Cure default constructor called.
// MateriaSource learned the cure materia recipe.
// Character name constructor called with name "me".
// MateriaSource creating ice materia.
// AMateria type constructor called.
// Ice default constructor called.
// me equipped ice materia to inventory index 0.
// MateriaSource creating cure materia.
// AMateria type constructor called.
// Cure default constructor called.
// me equipped cure materia to inventory index 1.
// Character name constructor called with name "bob".
// me: * shoots an ice bolt at bob *
// me: * heals bob's wounds *
// Character destructor called for "bob".
// Character destructor called for "me".
// Ice destructor called.
// AMateria destructor called.
// Cure destructor called.
// AMateria destructor called.
// MateriaSource destructor called.
// Ice destructor called.
// AMateria destructor called.
// Cure destructor called.
// AMateria destructor called.