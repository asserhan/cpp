#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(int ac, char **av)
{
    (void)av;
    if(ac == 1){
            {
                Intern someRandomIntern;
                Form* rrf;
                rrf = someRandomIntern.makeForm("robotomy request", "Bender");
                std::cout << *rrf << std::endl;
            }
            Bureaucrat b("Bureaucrat", 146);
            Intern i;
            Form *form[3];
            form[0] = i.makeForm("shrubbery creation", "home");
            form[1] = i.makeForm("robotomy request", "home");
            form[2] = i.makeForm("presidential pardon", "home");

    }else{
        std::cout << "Wrong arguments" << std::endl;
    }
}