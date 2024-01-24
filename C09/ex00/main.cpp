#include "BitcoinExchange.hpp"
#include <fstream>
int main(int ac,char **av){

   if(ac > 2){
        std::cout<<"Error : Wrong argument"<<std::endl;
        return(1);
    }
    std::ifstream file(av[1]);
    if(!file.is_open())
        std::cout<<"Error : could not open file."<<std::endl;
     return(0);
    
}