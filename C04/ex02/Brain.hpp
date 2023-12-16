#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
class Brain{

    public:
    std::string ideas[100];
    Brain();
    ~Brain();
    Brain(const Brain &oobj);
    Brain &operator=(const Brain &oobj);

};
#endif