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
    Array(const Array &oobj);
    Array & operator=(const Array &oobj);
    ~Array();
    unsigned int size() const;
    T & operator[](unsigned int index);
    class OutOfBoundsException : public std::exception{
        public :
        virtual const char * what()const throw();
    };
};
template<class T>
std::ostream &operator<<(std::ostream &os,const Array<T> &oobj);
#endif