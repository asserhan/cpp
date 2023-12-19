#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &oobj);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &oobj);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const &executor) const;
        void createfile(std::string filename)const ;

};
#endif