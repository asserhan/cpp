#ifndef  PMERGEME_HPP
#define  PMERGEME_HPP
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <deque>
 
class PmergeMe {

    private :
    std::vector<int> v;
    std::vector<int> vector;
    std::deque<int> d;
    std::deque<int> deque;
    public :
        PmergeMe();
        PmergeMe(int ac,char **av);
        ~PmergeMe();
        PmergeMe(const PmergeMe &oobj);
        PmergeMe &operator=(const PmergeMe &oobj);


};

#endif