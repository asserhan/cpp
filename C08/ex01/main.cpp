#include "Span.hpp"

int main(){
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout<<sp.shortestSpan()<<std::endl;
        std::cout<<sp.longestSpan()<<std::endl;
    }
    try{
        std::vector<int> v(10000);
        std::generate(v.begin(), v.end(), std::rand);
        Span sp = Span(v.size());
    }
    return 0;
}