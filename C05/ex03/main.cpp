#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
void ff(void){
    system("leaks intern");
}
int main(int ac, char **av)
{
    (void)av;
    atexit(ff);
    if(ac == 1){
                Form* rrf = NULL;
            try{
                Intern someRandomIntern;
                rrf = someRandomIntern.makeForm("robotomy request", "Bender");
                std::cout << *rrf << std::endl;
            }
            catch(std::exception &e){
                std::cout << e.what() << std::endl;
            }
                delete rrf;

            // Bureaucrat b("Bureaucrat", 146);
            // Intern i;
            // Form *form[3];
            // form[0] = i.makeForm("shrubbery creation", "home");
            // form[1] = i.makeForm("robotomy request", "home");
            // form[2] = i.makeForm("presidential pardon", "home");

    }else{
        std::cout << "Wrong arguments" << std::endl;
    }
}