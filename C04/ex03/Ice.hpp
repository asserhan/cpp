#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice :public AMateria
{
    public:
        Ice();
        ~Ice();
        Ice(Ice const &oobj);
        Ice &operator=(Ice const &oobj);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif