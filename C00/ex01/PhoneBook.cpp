/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:15:10 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/20 07:06:40 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
void PhoneBook :: _addContact()
{
    static int index ;
    this->contact[index%8].setinput();
    this->contact[index%8].setIndex(index);
    index++;
}
void PhoneBook :: set_cmd() {
    bool contactEntred = false;
    while(1)
    {
        if(!contactEntred)
            std :: cout << "Please enter a command : " ;
        std :: string input;
        std :: getline(std :: cin,input);
        if(std :: cin.eof()==1 || std :: cin.fail() || std :: cin.bad())
        {
            std :: cin.clear();
            std::cin.ignore();
            contactEntred = false;
            break;
        }
        if(input == "ADD")
        {
            std :: cout <<"-----Please enter your contact information-----"<<std::endl;
            _addContact();
            contactEntred = true;

            
        }
        else if(input == "SEARCH")
        {
            
        }
        else if(input == "EXIT")
        {
            break;
        }
        else 
        {
            std :: cout << "Please try again !" << std :: endl;
             contactEntred = false;
        }
    }
        
}