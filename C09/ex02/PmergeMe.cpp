#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++){
        std::string str = av[i];
        if(str.find_first_not_of("0123456789 +") != std::string::npos){
            std::cerr << "Error " << std::endl;
            return;
        }
        vector.push_back(std::stoi(str));
        deque.push_back(std::stoi(str));
    }
}
PmergeMe::PmergeMe(const PmergeMe &oobj) {
    *this = oobj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &oobj) {
    if (this != &oobj){
        vector = oobj.vector;
        deque = oobj.deque;
    }
    return *this;
}

PmergeMe::~PmergeMe() {

}

void PmergeMe :: sortVector(){
    
}