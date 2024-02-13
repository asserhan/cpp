#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++){
        std::string str = av[i];
        if(str.find_first_not_of("0123456789 +/t") != std::string::npos)
            throw std::invalid_argument("Error");
        if (std::stoi(str) > std::numeric_limits<int>::max())
            throw std::out_of_range("Error");
        this->vector.push_back(std::stoi(str));
        this->deque.push_back(std::stoi(str));
    }
}
PmergeMe::PmergeMe(const PmergeMe &oobj) {
    *this = oobj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &oobj) {
    if (this != &oobj){
        this->vector = oobj.vector;
        this->deque = oobj.deque;
    }
    return *this;
}

PmergeMe::~PmergeMe() {

}

void PmergeMe :: sortVector() {
    std::vector<int> v = this->vector;
    for(size_t i = 0; i < this->vector.size(); i++){
        std::cout << this->vector[i] << " ";
    }
    std::cout << std::endl;
    unsigned long time1 = clock();
    std::cout <<time1 << std::endl;

}

void PmergeMe :: sortDeque() {
    std::deque<int> d = this->deque;
    for(size_t i = 0; i < this->deque.size(); i++){
        std::cout << this->deque[i] << " ";
    }
    std::cout << std::endl;
    unsigned long time1 = clock();
    std::cout <<time1 << std::endl;
}