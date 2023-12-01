#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout<<"MateriaSource Default constructor"<<std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource() {
    std::cout<<"MateriaSource Default destructor"<<std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] !=NULL)
            delete this->materia[i];   
    }
}

MateriaSource::MateriaSource(const MateriaSource &oobj) {
    std::cout<<"MateriaSource copy constructor"<<std::endl;
    (*this) = oobj;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &oobj) {
    std::cout<<"MateriaSource copy assignment operator"<<std::endl;
    for(int i = 0; i < 4; i++)
        this->materia[i] = oobj.materia[i];
    return(*this);
}

void MateriaSource :: learnMateria(AMateria *m) {
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            this->materia[i] = m;
            std::cout <<" MateriaSource learned "<<m->getType()<<std::endl;
            return;
        }
    }
}

AMateria *MateriaSource :: createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {
            if (this->materia[i]->getType() == type)
            {
                std::cout <<" MateriaSource created "<<type<<std::endl;
                return(this->materia[i]);
            }
        }
    }
    std::cout <<" MateriaSource not found "<<type<<std::endl;
    return(NULL);
}

