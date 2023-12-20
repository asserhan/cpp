#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(int ac, char **av)
{
    (void)av;
    if(ac == 1){
        
        Bureaucrat b("Bureaucrat", 1);
        AForm *form[3];
        form[0] = new ShrubberyCreationForm("home");
        form[1] = new RobotomyRequestForm("home");
        form[2] = new PresidentialPardonForm("home");
        for(int i = 0; i < 3; i++){
            try{
                form[i]->beSigned(b);
                b.signForm(*form[i]);
                b.executeForm(*form[i]);
            }
            catch(std::exception &e){
                std::cout << e.what() << std::endl;
            }
            delete form[i];
        }

    }else{
        std::cout << "Wrong arguments" << std::endl;
    }
}