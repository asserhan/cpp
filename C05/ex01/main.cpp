#include "Bureaucrat.hpp"
#include "Form.hpp"
int main(int ac,char *av[])
{
    (void)av;
    if(ac == 1)
    {
        try{
            Bureaucrat bu("diplomat", 1);
            Form form("form", 5, 1);
            form.beSigned(bu);
            bu.signForm(form);
            bu.Decrement();
            std::cout << form;
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    else{
        std::cout << "Wrong Arguments" << std::endl;
    }

}