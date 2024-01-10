#include "Span.hpp"

int main(){
    {
        try{
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout<<sp.shortestSpan()<<std::endl;
            std::cout<<sp.longestSpan()<<std::endl;
        }
        catch(const std::exception &e){
            std::cout<<e.what()<<std::endl;
        }
    }
    try{
        std::vector<int> v(20100);
        srand(time(NULL));
        std::generate(v.begin(), v.end(), rand);    
        Span sp = Span(v.size());
        sp.fillSpan(v.begin(), v.end());
        std::cout<<sp.shortestSpan()<<std::endl;
        std::cout<<sp.longestSpan()<<std::endl;
    }
    catch(const std::exception &e){
        std::cout<<e.what()<<std::endl;
    }
    return 0;
}