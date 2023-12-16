#include "Bureaucrat.hpp"
int main(int ac,char *av[])
{
    (void)av;
    if(ac == 1)
    {
        try{
            Bureaucrat bu("diplomat", 1);
            bu.Increment();
            std::cout << bu.getGrade() << std::endl;
            bu.Decrement();
            std::cout << bu.getGrade() << std::endl;

        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    else{
        std::cout << "Wrong Arguments" << std::endl;
    }

}