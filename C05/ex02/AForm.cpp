#include "AForm.hpp"
AForm::AForm() : _name("default"), _signed(false), _gradeSign(150), _gradeExec(150) {
    //std::cout << "AForm default constructor called" << std::endl;
}
AForm:: AForm(std::string name, const int gradeToSign, const int gradeToExecute) : _name(name),_gradeSign(gradeToSign),_gradeExec(gradeToExecute){
    //std::cout << "AForm constructor called" << std::endl;
    if(gradeToSign < 1 || gradeToExecute < 1)
        throw AForm:: GradeTooHighExeption();
    else if(gradeToSign > 150 || gradeToExecute > 150)
        throw AForm :: GradeTooLowExeption();
    else 
        _signed = false;
}

AForm :: AForm(const AForm &oobj):_gradeSign(oobj._gradeSign),_gradeExec(oobj._gradeExec){
    std::cout << "AForm copy constructor called" << std::endl;
    (*this) = oobj;
}
AForm &AForm :: operator=(const AForm &oobj){
    std::cout << "AForm copy assignment operator called " << std::endl;
    this->_signed = oobj.getSigned();
    return(*this);
}
AForm:: ~AForm(){
   // std::cout << "AForm destructor called" << std::endl;
}
const std::string AForm :: getName()const{
    return(this->_name);
}
int AForm :: getGradeToSign()const{
    return(this->_gradeSign);
}
int AForm :: getGradeToExecute()const{
    return(this->_gradeExec);
}
bool AForm :: getSigned()const{
    return(this->_signed);
}
std :: ostream &operator<<(std :: ostream &os,const AForm &oobj){
    os << oobj.getName() << " grade to execute is " << oobj.getGradeToExecute() << std::endl;
    os << oobj.getName() << " grade to sign is " << oobj.getGradeToSign() << std::endl;
    os << oobj.getName() << " signed is " << oobj.getSigned() << std::endl;
    return(os);
}
void AForm :: beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() < this->_gradeSign)
        throw AForm :: GradeTooLowExeption();
    else
        this->_signed = true;
}