#include "Array.hpp"

template<class T>
Array<T>:: Array() : tab(NULL),_size(0){
    std::cout << "Default constructor called" << std::endl;
}

template<class T>
Array<T>:: Array(unsigned int n) : tab(new T[n]),_size(n){
        std::cout << "Array created" << std::endl;

}

template<class T>
Array<T>:: ~Array(){
    std::cout << "Default destructor called" << std::endl;
    delete[] this->tab;
}

template<class T>
Array<T>:: Array(const T &oobj):tab(new T[oobj.size()]),_size(oobj.size()) {
    std::cout << "Copy constructor called" << std::endl;
    for(unsigned int i = 0; i < _size; i++) {
        tab[i] = oobj.tab[i];
    }
}

template<class T>
T& Array<T> :: operator=(const T&oobj){
    std::cout <<"Copy assignment operator called"<<std::endl;
    delete[]this->tab;
    this->tab = new T[oobj.size()];
    this->_size = oobj.size();
    for(unsigned int i = 0;i<_size;i++){
        tab[i] = oobj.tab[i];
    }
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
    return(tab[index]);
}

template<class T>
std::ostream &operator<<(std::ostream &os, Array<T> &oobj){
    for(unsigned int i = 0;i<oobj.size();i++){
        os<<oobj[i]<<std::endl;
    }
    return(os);
}
int main(){
    try{
        Array<int>iarray[5]={5,4,0,2,1};
        Array<float>farray[10];
        std::cout<<iarray[1]<<std::endl;
        std::cout<<iarray[4]<<std::endl;
    }
    catch(std::exception &e){
        std::cout<<e.what()<<std::endl;
    }

}