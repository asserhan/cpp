#include "PmergeMe.hpp"


int main(int ac, char **av){

    if(ac < 2){
        std::cerr << "Error Wrong Arguments" << std::endl;
        return 1;
    }
    PmergeMe p(ac, av);
   
    return 0;
}