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
Base *generate(void); //downcasting
void identify(Base *p);
void identify(Base &p);
#endif