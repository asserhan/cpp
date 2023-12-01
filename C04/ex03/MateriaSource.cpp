#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    std::cout<<"MateriaSource Default constructor"<<std::endl;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

MateriaSource::~MateriaSource() {
    std::cout<<"MateriaSource Default destructor"<<std::endl;
    this->deletemateria();
}

MateriaSource::MateriaSource(MateriaSource const &oobj) {
    std::cout<<"MateriaSource copy constructor"<<std::endl;
     for(int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {
            delete this->materia[i];
            this->materia[i] = NULL;
        }
        this->materia[i] = oobj.materia[i]->clone();
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &oobj) {
    std::cout<<"MateriaSource copy assignment operator"<<std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (this->materia[i] != NULL)
        {
            delete this->materia[i];
            this->materia[i] = NULL;
        }
        this->materia[i] = oobj.materia[i]->clone();
    }
    return(*this);
}

void MateriaSource :: learnMateria(AMateria *_materia) {
    if(_materia == NULL)
        return;
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] == NULL)
        {
            std::cout <<" MateriaSource learned "<<_materia->getType()<<std::endl;
            this->materia[i] = _materia;
            return;
        }
    }
    std::cout << "  MateriaSource can't learned " << _materia->getType() << std::endl;
    return;
}

AMateria *MateriaSource :: createMateria(std::string const &type) {
    for (int i = 0; i < 4; i++)
    {
        std :: cout << this->materia[i] << std::endl;
      if(this->materia[i] && this->materia[i]->getType() == type)
      {
        std :: cout << i << type << std::endl;
        std::cout <<" MateriaSource created "<<type<<std::endl;
        return(this->materia[i]->clone());
      }
    }
    std::cout <<" MateriaSource not found "<<type<<std::endl;
    return(NULL);
}
void MateriaSource :: deletemateria() {
    for (int i = 0; i < 4; i++)
    {
        if (this->materia[i] !=NULL)
            delete this->materia[i];   
    }
}

