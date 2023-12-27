#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<class T>
class Array{
    private:
        T *tab;
        unsigned int size;
    public:
    Array();
    Array(unsigned int n);
    Array(const T &oobj);
    T & operator=(const T &oobj);
    ~Array();
};

#endif