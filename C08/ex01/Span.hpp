#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>

class Span{
    private:
    unsigned int _N;
    public:
    Span();
    Span(unsigned int N);
    Span(const Span &oobj);
    Span &operator=(const Span &oobj);
    ~Span();
    void addNumber(int number);
    unsigned int  getN()const;
};
#endif