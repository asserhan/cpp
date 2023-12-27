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
Array<T>:: Array(const Array &oobj):tab(new T[oobj.size()]),_size(oobj.size()) {
    std::cout << "Copy constructor called" << std::endl;
    for(unsigned int i = 0; i < _size; i++) {
        tab[i] = oobj.tab[i];
    }
}

template<class T>
Array<T>& Array<T> :: operator=(const Array&oobj){
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
    Array<int> a(5);
    Array<float> b(5);
    Array<int> c(5);
    b[0] = 1.1;
    b[3] = 10.2f;
    for(unsigned int i = 0;i<a.size();i++){
        a[i] = i;
    }
    std::cout<<a[4]<<std::endl;
    std::cout<<b<<std::endl;
    std::cout<<a<<std::endl;
    a = c;
    std::cout<<a<<std::endl;
    std::cout<<a[6]<<std::endl;
  }
  catch(std::exception &e){
      std::cout<<e.what()<<std::endl;
  }
}