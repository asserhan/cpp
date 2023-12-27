#include "Array.hpp"

template<class T>
Array<T>:: Array() : tab(NULL),_size(0){
    std::cout << "Default constructor called" << std::endl;
}

template<class T>
Array<T>:: Array(unsigned int n) : tab(new T[n]),_size(n){
        std::cout << "Array created" << std::endl;
//     for(unsigned int i = 0;i<n;i++){
//         this->tab[i] = T();
//     }
}

template<class T>
Array<T>:: ~Array(){
    std::cout << "Default destructor called" << std::endl;
}

template<class T> 
Array<T>::Array(const T&oobj):tab(new T[oobj.size()]),_size(oobj.size()){
    std::cout <<"Copy constructor called"<<std::endl;
}

template<class T>
T& Array<T> :: operator=(const T&oobj){
    std::cout <<"Copy assignment operator called"<<std::endl;
    delete[]this->tab;
    this->tab = new T[oobj.size()];
    this->_size = oobj.size();
    return(*this);
} 

template<class T>
unsigned int Array<T> :: size()const {
    return(this->_size);
}

template<class T>
const char * Array<T> :: OutOfBoundsException :: what()const throw(){
    return "Index out of bounds";
}
template<class T>
T & Array<T> :: operator[](unsigned int index){
    if(index > size() || index < 0)
        throw Array::OutOfBoundsException();
}
int main(){
    Array<int>tab(5);
    // for(int i=0;i<5;i++){
    //     std::cout<<tab[i]<<std::endl;
    // }
}