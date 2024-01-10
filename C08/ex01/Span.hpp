#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <limits>

class Span{
    private:
    unsigned int _N;
    std::vector<int> _v;
    public:
    Span();
    Span(unsigned int N);
    Span(const Span &oobj);
    Span &operator=(const Span &oobj);
    ~Span();
    unsigned int  getN()const;
    void addNumber(int n);
    int shortestSpan();
    int longestSpan();
    void fillSpan(std::vector<int>::iterator begin , std::vector<int>::iterator end);
};
#endif