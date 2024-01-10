#include "Span.hpp"

Span::Span(){
    //std::cout<<"default constructor called"<<std::endl;
}
Span::Span(unsigned int N):_N(N){
    //std::cout<<"Constructor called"<<std::endl;
    if(N==0)
        throw std::exception();
    this->_v.reserve(N);
}
Span ::Span(const Span &oobj){
    //std::cout<<"copy constructor called"<<std::endl;
    (*this)=oobj;
}
Span & Span:: operator=(const Span &oobj){
    //std::cout<<"copy assignment operator called"<<std::endl;
    this->_N =oobj.getN();
    return(*this);
}
Span :: ~Span(){
   // std::cout<<"default destructor called"<<std::endl;
}
unsigned int Span :: getN() const{
    return(this->_N);
}
void Span :: addNumber(int n){
    if(this->_v.size() < this->_N)
        this->_v.push_back(n);
    else
        throw std::exception();
}
int Span :: shortestSpan(){
    if(this->_v.size() < 2)
        throw std::exception();
    std::vector<int> tmp(this->_v);
    std::sort(tmp.begin(),tmp.end());
    int minSpan=std::numeric_limits<int>::max();
    for(unsigned int i=0;i<tmp.size()-1;i++){
        if(tmp[i + 1] - tmp[i] < minSpan)
            minSpan=tmp[i + 1] - tmp[i];
    }
    return(minSpan);
}
int Span:: longestSpan(){
    if (this->_v.size() < 2)
        throw std::exception();
    int min = *std::min_element(this->_v.begin(), this->_v.end());
    int max = *std::max_element(this->_v.begin(), this->_v.end());
    return(max - min);
}
void Span:: fillSpan(std::vector<int>::iterator begin , std::vector<int>::iterator end){
    if(this->_v.size() > this->_N)
        throw std::exception();
    this->_v.insert(this->_v.end(),begin,end);
}