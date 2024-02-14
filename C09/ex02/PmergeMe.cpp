#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {

}

PmergeMe::PmergeMe(int ac, char **av) {
    for (int i = 1; i < ac; i++){
        std::string str = av[i];
        if(str.find_first_not_of("0123456789 +/t") != std::string::npos)
            throw std::invalid_argument("Error");
        if(str.compare("") == 0)
            throw std::invalid_argument("Error");
        if (std::atoi(str.c_str()) > std::numeric_limits<int>::max())
            throw std::out_of_range("Error");
        this->unsVector.push_back(std::atoi(str.c_str()));
        this->unsdDeque.push_back(std::atoi(str.c_str()));
    }
}
PmergeMe::PmergeMe(const PmergeMe &oobj) {
    *this = oobj;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &oobj) {
    if (this != &oobj){
        this->unsVector = oobj.unsVector;
        this->unsdDeque = oobj.unsdDeque;
        this->soredVector = oobj.soredVector;
        this->soredDeque = oobj.soredDeque;
    }
    return *this;
}

PmergeMe::~PmergeMe() {

}
template <class T>
bool isSorted(T &container){
    for (size_t i = 0; i < container.size() - 1; i++){
        if (container[i] > container[i + 1])
            return false;
    }
    return true;
}

std::vector<std::pair<int, int> > splitVecor(std::vector<int> &v){
    std::vector<std::pair<int, int> > pairs;
    for(size_t i = 0; i < v.size(); i++){
        if(i % 2== 0 )
            pairs.push_back(std::make_pair(v[i], v[i + 1]));
    }
    return pairs;
}
void PmergeMe :: sortVector() {
    std::cout << "Before : ";
    for(size_t i = 0; i < this->unsVector.size(); i++){
        std::cout <<this->unsVector[i] << " ";
    }
    std::cout << std::endl;
    unsigned long time1 = clock();
    std::vector<int> v = this->unsVector;
    if(isSorted(this->unsVector) == true)
    {
        for(size_t i = 0; i < this->unsVector.size(); i++){
            this->soredVector.push_back(this->unsVector[i]);
        }
        return;
    }
    if(this->unsVector.size() % 2 != 0)
    {
        int struggler = this->unsVector.back();
        this->unsVector.pop_back();
        std::cout<<struggler<<std::endl;
    }
    std::vector<std::pair<int, int> > pairs = splitVecor(this->unsVector);
    for(size_t i = 0 ;i<pairs.size(); i++){
        std::cout << "Pair : " << pairs[i].first << " " << pairs[i].second << std::endl;
    }
    
    std::cout <<time1 << std::endl;

}

// void PmergeMe :: sortDeque() {
//     std::deque<int> d = this->unsdDeque;
//     for(size_t i = 0; i < this->unsdDeque.size(); i++){
//         std::cout << this->unsdDeque[i] << " ";
//     }
//     std::cout << std::endl;
//     unsigned long time1 = clock();
//     std::cout <<time1 << std::endl;
// }