#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>

class A;
class B;
class C;

class Base{
    public:
    virtual ~Base();
};
Base *generate(void); //upcasting
void identify(Base *p); //downcasting
void identify(Base &p);
#endif