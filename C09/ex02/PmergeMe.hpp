#ifndef  PMERGEME_HPP
#define  PMERGEME_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
#include <ctime>
class PmergeMe {

    private :
    std::vector<int> unsVector;
    std::vector<int>soredVector;
    std::deque<int> unsdDeque;
    std::deque<int> soredDeque;
    public :
        PmergeMe();
        PmergeMe(int ac,char **av);
        ~PmergeMe();
        PmergeMe(const PmergeMe &oobj);
        PmergeMe &operator=(const PmergeMe &oobj);
        void sortVector();
        void sortDeque();


};

#endif