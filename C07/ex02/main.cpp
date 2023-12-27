#include "Array.hpp"

template<class T>
Array<T>:: Array() : tab(NULL),size(0){
    std::cout << "Default constructor called" << std::endl;
}

template<class T>
Array<T>:: Array(unsigned int n) : tab(new T[n],size(n)){
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
Array<T>::Array(const T&oobj){
    std::cout <<"Copy constructor called"<<std::endl;
    (*this)=oobj;
}
template<class T>
T& Array<T> :: operator=(const T&oobj){
    std::cout <<"Copy assignment operator called"<<std::endl;
    delete[]this->tab;
    this->tab = oobj.tab;
} 

int main(){
    Array<int>tab(5);
    // for(int i=0;i<5;i++){
    //     std::cout<<tab[i]<<std::endl;
    // }
}