#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"
class  RobotomyRequestForm : public Form{
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