#ifndef RNP_HPP
#define RNP_HPP
#include <iostream>
#include <stack>

class RPN {
    private:
        std::stack<int> _stack;
    public:
        RPN();
        RPN(std::string str);
        RPN(const RPN &oobj);
        RPN &operator=(const RPN &oobj);
        ~RPN();
        int calculate( std::string str);
};
#endif