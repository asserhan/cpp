#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice :public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(const Ice &oobj);
        Ice &operator=(const Ice &oobj);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif