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
        MateriaSource(MateriaSource const &oobj);
        MateriaSource &operator=( MateriaSource const &oobj);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
        void deletemateria();
};
#endif