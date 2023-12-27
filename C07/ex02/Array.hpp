#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>

template<class T>
class Array{
    private:
        T *tab;
        unsigned int _size;
    public:
    Array();
    Array(unsigned int n);
    Array(const T &oobj);
    T & operator=(const T &oobj);
    ~Array();
    unsigned int size() const;
    T & operator[](unsigned int index);
    class OutOfBoundsException : public std::exception{
        public :
        virtual const char * what()const throw();
    };
};

#endif