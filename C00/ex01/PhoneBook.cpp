/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:15:10 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/21 21:28:51 by hasserao         ###   ########.fr       */
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
int Contact :: _getIndex()
{
   return(this->index);
}
void PhoneBook :: _displayContact(int index)
{
    std :: cout << "---------------------------------------------------------" << std :: endl;
    std :: cout << "|   Index    |  First Name  |  Last Name  |  Nickname  |"<< std :: endl;
    std :: cout << "---------------------------------------------------------" << std :: endl;
    std :: cout << "|" this->contact[index].index (Inaccessible)
    
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
            std :: cout << "---Please enter the index of the contact you want to display--"<< std :: endl;
            int index;
            std :: cin >> index;
            if(std :: cin.good() &&  index >=0 && index <=8)
                _displayContact(index);
            else 
                std :: cout << "Error Please enter a number between 0 and 8" << std :: endl;
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