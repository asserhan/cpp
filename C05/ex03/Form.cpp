#include "Form.hpp"
Form::Form() : _name("default"), _signed(false), _gradeSign(15), _gradeExec(15) {
    //std::cout << "Form default constructor called" << std::endl;
}
Form:: Form(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name),_gradeSign(gradeToSign),_gradeExec(gradeToExecute){
    //std::cout << "Form constructor called" << std::endl;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw Form:: GradeTooHighExeption();
    else if(gradeToSign > 150 || gradeToExecute > 150)
        throw Form :: GradeTooLowExeption();
    else 
        _signed = false;
}

Form :: Form(const Form &oobj):_gradeSign(oobj._gradeSign),_gradeExec(oobj._gradeExec){
    std::cout << "Form copy constructor called" << std::endl;
    (*this) = oobj;
}
Form &Form :: operator=(const Form &oobj){
    std::cout << "Form copy assignment operator called " << std::endl;
    this->_signed = oobj.getSigned();
    return(*this);
}
Form:: ~Form(){
   // std::cout << "Form destructor called" << std::endl;
}
const std::string Form :: getName()const{
    return(this->_name);
}
int Form :: getGradeToSign()const{
    return(this->_gradeSign);
}
int Form :: getGradeToExecute()const{
    return(this->_gradeExec);
}
bool Form :: getSigned()const{
    return(this->_signed);
}
std :: ostream &operator<<(std :: ostream &os,const Form &oobj){
    os << oobj.getName() << " grade to execute is " << oobj.getGradeToExecute() << std::endl;
    os << oobj.getName() << " grade to sign is " << oobj.getGradeToSign() << std::endl;
    os << oobj.getName() << " signed is " << oobj.getSigned() << std::endl;
    return(os);
}
void Form :: beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() < this->_gradeSign)
        throw Form :: GradeTooLowExeption();
    else
        this->_signed = true;
}