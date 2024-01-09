#include "easyfind.hpp"
#include <vector>

template<typename T>
void easyfind(T &container,int value){
    typename T::iterator it = std::find(container.begin(),container.end(),value);
    if( it != container.end())
        std::cout<<"Element found at "<<std::distance(container.begin(),it)<<std::endl;
    else{
        throw std::out_of_range("Element not found");
    }
}
int main(){
    std::vector<int> vec;
    for(int i=1;i<=100;i*=4)
        vec.push_back(i);
    for(std::vector<int>::iterator i = vec.begin(); i!=vec.end(); i++)
        std::cout<<*i<<" ";
    std::cout<<std::endl;
    try{
        easyfind(vec,16); 
    }catch(const std::out_of_range &e){
        std::cout<<e.what()<<std::endl;
    }
    try{
        easyfind(vec,15); 
    }catch(const std::out_of_range &e){
        std::cout<<e.what()<<std::endl;
    }
    return(0);
}