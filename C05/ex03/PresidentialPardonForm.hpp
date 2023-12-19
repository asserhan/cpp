#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"
class PresidentialPardonForm : public Form{
    private:
        std::string _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &oobj);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &oobj);
        ~PresidentialPardonForm();
        void execute(Bureaucrat const &executor) const;
};
#endif