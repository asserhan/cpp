/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:32 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/20 04:06:58 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string>

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
        if(std :: cin.good() && _isAlpha(line) && !line.empty())
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
    this->_darkest_srcret = getinput("Enter Darkest secret : ");
}
