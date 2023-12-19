#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <fstream>
#include "AForm.hpp"
class  RobotomyRequestForm : public AForm{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &oobj);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &oobj);
        ~RobotomyRequestForm();
        void execute(Bureaucrat const &executor) const;

};
#endif