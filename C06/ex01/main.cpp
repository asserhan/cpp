#include "Serializer.hpp"

int main(int ac,char **av){
    (void)av;

    if(ac == 1){
        Data *ptr = new Data();
        std::cout<< ptr<<std::endl;
        uintptr_t raw = Serializer :: serialize(ptr);
        std::cout<<raw<<std::endl;
        ptr = Serializer :: deserialize(raw);
        std::cout<< ptr<<std::endl;
        delete ptr;
    }else{
        std::cout <<"Wrong input"<<std::endl;
        return(1);
    }
    return(0);

}