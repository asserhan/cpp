#ifndef CARACTER_HPP
# define CARACTER_HPP
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        Character();
        ~Character();
        Character(const Character &oobj);
        Character &operator=(const Character &oobj);
        Character(std::string const & name);
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
    
};
#endif