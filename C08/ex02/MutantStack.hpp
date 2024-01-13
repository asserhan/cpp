#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include<iostream>
#include<stack>
#include<deque>
#include <iterator>


template <typename T >
class MutantStack : public  std::stack<T>{
    public :
    MutantStack();
    MutantStack(MutantStack const & src);
    ~MutantStack();
    MutantStack & operator=(MutantStack const & rhs);
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin();
    iterator end();

};
template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {

}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const & src) {
    *this = src;
}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(MutantStack const & rhs) {
    if (this != &rhs)
        std::stack<T>::operator=(rhs);
    return (*this);
}
template <typename T>
MutantStack<T>::~MutantStack() {

}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
    return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
    return (this->c.end());
}
#endif