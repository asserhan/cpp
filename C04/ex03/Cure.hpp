#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure :public AMateria
{
    public:
        Cure();
        ~Cure();
        Cure(const Cure &oobj);
        Cure &operator=(const Cure &oobj);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};
#endif