#include "Span.hpp"
Span::Span(){
    std::cout<<"default constructor called"<<std::endl;
}
Span::Span(unsigned int N):_N(N){
    std::cout<<"Constructor called"<<std::endl;
}
Span ::Span(const Span &oobj){
    std::cout<<"copy constructor called"<<std::endl;
    (*this)=oobj;
}
Span & Span:: operator=(const Span &oobj){
    std::cout<<"copy assignment operator called"<<std::endl;
    this->_N =oobj.getN();
    return(*this);
}
Span :: ~Span(){
    
}

unsigned int Span :: getN() const{
    return(this->_N);
}