#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base :: ~Base(){
    std::cout<<"Default destructor called"<<std::endl;
}
Base *generate(void){
   Base *ptr = NULL;
    int random = rand() % 3;
    switch(random){
        case 0 :
            return ptr=dynamic_cast<Base*>(new A());
        case 1 :
            return ptr=dynamic_cast<Base*>(new B());
        case 2 :
            return ptr=dynamic_cast<Base*>(new C());
    }
    return(ptr);
}
void identify(Base *p){
    if(dynamic_cast<A*>(p)){
        std::cout<<"A"<<std::endl;
    }
    else if(dynamic_cast<B*>(p)){
        std::cout<<"B"<<std::endl;
    }
    else if(dynamic_cast<C*>(p)){
        std::cout<<"C"<<std::endl;
    }
    else{
        std::cout<<"bad cast"<<std::endl;
    }
}
void identify(Base &p){
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout<<"A"<<std::endl;
        (void)a;
    }
    catch(std::bad_cast &bc){
        try{
            B &b = dynamic_cast<B&>(p);
            std::cout<<"B"<<std::endl;
            (void)b;
        }
        catch(std::bad_cast &bc){
            try{
                C &c = dynamic_cast<C&>(p);
                std::cout<<"C"<<std::endl;
                (void)c;
            }
            catch(std::bad_cast &bc){
                std::cout<<"bad cast"<<std::endl;
            }
        }
    }
}
