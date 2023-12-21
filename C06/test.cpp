#include <iostream>
#include <typeinfo>
int main(){
    const int &a =10;
    const int *p_a=&a;
    int *c = const_cast<int*>(p_a);
    std::cout << *c <<std::endl;

    // float b =static_cast<float>(a);
    // std::cout << typeid(a).name() << std::endl;
    // std::cout << typeid(static_cast<float>(a)).name() << std::endl;
    // int *p_a=&a;
    // float *p_b=&b;
    // p_b=reinterpret_cast<float *>(p_a);
    //std::cout <<a<<std::endl;
    //std::cout <<b<<std::endl;

}