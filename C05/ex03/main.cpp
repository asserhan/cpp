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
                Form* rrf = NULL;
            try{
                Intern someRandomIntern;
                rrf = someRandomIntern.makeForm("robotomy request", "Bender");
                // if(rrf != NULL){
                //     Bureaucrat b("Bureaucrat", 1);
                //     rrf->beSigned(b);
                //     rrf->execute(b);
                // }
            }
            catch(std::exception &e){
                std::cout << e.what() << std::endl;
            }
                delete rrf;

    }else{
        std::cout << "Wrong arguments" << std::endl;
    }
}