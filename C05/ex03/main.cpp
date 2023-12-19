#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(int ac, char **av)
{
    (void)av;
    if(ac == 1){
            
            Bureaucrat b("Bureaucrat", 146);
            Intern i;
            AForm *form[3];
            form[0] = i.makeForm("shrubberycreation", "home");
            form[1] = i.makeForm("robotomyrequest", "home");
            form[2] = i.makeForm("presidentialpardon", "home");
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