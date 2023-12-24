#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void ff(){
    system("leaks ex02");
}
int main(int ac,char **av){
    (void)av;
    atexit(ff);
    if(ac == 1){
        Base *ptr = generate();
        identify(ptr);
        if(ptr)
            identify(*ptr);
        delete(ptr);
    }
    else{
        std::cout<< "Wrong argument"<<std::endl;
    }

}