#ifndef MATTERIASOURCE_HPP
# define MATTERIASOURCE_HPP
# include "IMateriaSource.hpp"
# include "AMateria.hpp"
class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &oobj);
        MateriaSource &operator=(const MateriaSource &oobj);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};
#endif