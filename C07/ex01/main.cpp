#include "iter.hpp"

template<typename T,typename U ,typename F>
void iter(T *array, U length, void(*func)( F & _case))
{
    for (U i = 0; i < length; i++)
        func(array[i]);
}

template< typename T >
void multiply( T& x )
{
  std::cout << x * 5  << std::endl;
  return;
}

int main() {
 
    int tab[] = {5,28,2};
    float tab2[4]={2.5f,0.0f,4.2f,9.5f};
    iter(tab,3,multiply<int>);
    iter(tab2,4,multiply<float>);
  return 0;
}