#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
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
        
};
#endif