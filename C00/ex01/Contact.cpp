/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:32 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/22 18:43:12 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

Contact :: Contact()
{
    
}
Contact :: ~Contact()
{
    
}
bool _isAlpha(const std :: string str)
{
    int i=-1;
    while(str[++i])
    {
        if(!isalpha(str[i]))
            return(false);
    }
    return(true);
}
bool _isDigit(const std :: string str)
{
    int i=-1;
    while(str[++i])
    {
        if(!isdigit(str[i]))
            return(false);
    }
    return(true);
}
void Contact :: setIndex(int i) {
    this->index = i;
}
int Contact :: _getIndex()
{
   return(this->index);
}
std ::string Contact ::getinput(std ::string str)
{
     
    bool correct = false;
    std :: string line = "";
    while(!correct)
    {
        std :: cout << str;
        std :: getline(std :: cin,line);
        if(std :: cin.eof())
        {
            std :: cin.clear();
            std :: cin.ignore();
            exit(1);
        }  
        if(str.compare("Enter your phone number : ") == 0 && !line.empty() && std ::cin.good() && _isDigit(line))
            correct = true;
        else if(str.compare("Enter your phone number : ") && std :: cin.good() && _isAlpha(line) && !line.empty())
            correct = true;
        else{
            std :: cout << "Please try again !" << std ::endl;
        }
    }
    return (line);
}
void Contact :: setinput() 
{
    this->_first_name = getinput("Enter First name: ");
    this->_last_name = getinput("Enter Last name : ");
    this->_nickname = getinput("Enter Nickname : ");
    this->_darkest_secret = getinput("Enter Darkest secret : ");
    this->_phone_number = getinput("Enter your phone number : ");
}

