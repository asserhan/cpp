#include "RPN.hpp"


int main(int ac,char **av){
    if(ac != 2){
        std::cerr<<"Error Wrong argument"<<std::endl;
        return 1;
    }
    try{
    RPN rpn((std::string)av[1]);
    int res = rpn.calculate((std::string)av[1]);
    std::cout<<res<<std::endl;
    }catch(std::exception &e){
        std::cerr<<e.what()<<std::endl;
    }

    return 0;
}