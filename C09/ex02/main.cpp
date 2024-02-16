#include "PmergeMe.hpp"


int main(int ac, char **av){

    if(ac < 2){
        std::cerr << "Error Wrong Arguments" << std::endl;
        return 1;
    }
    try{
        PmergeMe p(ac, av);
        p.sortVector();
       p.sortDeque();
       
    }catch(const std::exception &e){
        std::cerr << e.what() << std::endl;
    }
   
    return 0;
}