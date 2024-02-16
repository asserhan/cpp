#include "RPN.hpp"

RPN::RPN() {
}

RPN::RPN(std::string str) {
   size_t pos = str.find_first_not_of("0123456789*/+- ");
    if (pos != std::string::npos) 
        throw std::invalid_argument("Error");
}

RPN::RPN(const RPN &oobj) {
    *this = oobj;
}

RPN &RPN::operator=(const RPN &oobj) {
    if (this != &oobj)
        this->_stack = oobj._stack;
    return *this;
}

RPN::~RPN() {
}

int RPN::calculate(std::string str) {
    int a;
    int b;
    int res;
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == ' ')
            continue;
        if (str[i] >= '0' && str[i] <= '9') {
            this->_stack.push(str[i] - '0');
        } else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            if (this->_stack.size() < 2)
                throw std::logic_error("Error");
            a = this->_stack.top();
            this->_stack.pop();
            b = this->_stack.top();
            this->_stack.pop();
            if (str[i] == '+')
                res = b + a;
            else if (str[i] == '-')
                res = b - a;
            else if (str[i] == '*')
                res = b * a;
            else if (str[i] == '/') {
                if (a == 0)
                    throw std::logic_error("Error");
                res = b / a;
            }
            this->_stack.push(res);
        } else
            throw std::invalid_argument("Error");
    }
    if (this->_stack.size() != 1)
        throw std::logic_error("Error");
    return this->_stack.top();
}