#ifndef ITER_HPP
#define ITER_HPP
#include <iostream>
template<typename T,typename U ,typename F>
void iter(T *array, U length, void(*func)( F & _case));
#endif