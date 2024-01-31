#include "BitcoinExchange.hpp"
#include <fstream>

int main(int ac,char **av){
(void)ac;
(void)av;
//    if(ac > 2){
//         std::cout<<"Error : Wrong argument"<<std::endl;
//         return(1);
//     }
//     std::ifstream file(av[1]);
//     if(!file.is_open())
//         std::cout<<"Error : could not open file."<<std::endl;
//     else{
    try{
        BitcoinExchange exchange;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
     return(0);
    
}