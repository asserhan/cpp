#include "Animal.hpp"

int main(int ac,char *argv[])
{
    (void) argv;
    if(ac == 1)
    {
        Animal a;
        Animal b;
        b=a;
        std::cout<<b.getType()<<std::endl;
    }
    else 
    {
        std::cout <<"Wrong argument"<<std::endl;
        return(1);
    }
    return(0);
}