#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("default",145,137),_target("default"){
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery",145,137),_target(target){
    std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oobj):AForm(oobj){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    (*this) = oobj;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &oobj){
    std::cout << "ShrubberyCreationForm copy assignment operator called " << std::endl;
    this->_target = oobj._target;
    return(*this);
}
ShrubberyCreationForm:: ~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
void ShrubberyCreationForm::createfile(std::string filename)const {
    std::ofstream file(filename);
    if(file.is_open()){
        file << "        /\\" << std::endl;
        file << "       /  \\" << std::endl;
        file << "      /    \\" << std::endl;
        file << "     /      \\" << std::endl;
        file << "    /        \\" << std::endl;
        file << "   /__________\\" << std::endl;
        file << "        ||        " << std::endl;
        file << "        ||        " << std::endl;
        file << "        ||        " << std::endl;
        file.close();
    }
    else 
        std::cout << "Error opening file" << std::endl;

}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if(this->getSigned() == false)
        throw AForm::FormNotSignedException();
    else if(executor.getGrade() > this->getGradeToExecute())
        throw AForm::GradeTooLowExeption();
    else{
        std::cout << "ShrubberyCreationForm is executed" << std::endl;
        createfile(_target+ "_shrubbery");
    }
}