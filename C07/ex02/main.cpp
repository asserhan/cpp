#include "Array.hpp"

template<class T>
Array<T>:: Array() : tab(NULL),size(0){
    std::cout << "Default constructor called" << std::endl;
}

template<class T>
Array<T>:: Array(unsigned int n) : tab(new T[n],size(n)){
        std::cout << "Array created" << std::endl;
    for(unsigned int i = 0;i<n;i++){
        this->tab[i] = T();
    }
}

template<class T>
Array<T>:: ~Array(){
    std::cout << "Default destructor called" << std::endl;
}
int main(){
    int *a =new int ();
    std::cout<<*a<<std::endl;
}