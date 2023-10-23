/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:15:10 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/23 21:57:56 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook :: _addContact()
{
    static int index ;
    this->contact[index%8].setinput();
    this->contact[index%8].setIndex(index%8);
    index++;
}
std :: string  printed_len(std :: string str)
{
    if(str.length()>10)
        str = str.substr(0,9) +".";
    return (str);
}
void PhoneBook :: _displayContacts() const
{
    for (int i=0;i<8;i++)
    {
        if(!contact[i]._getFistName().empty() ){
            std :: cout << "---------------------------------------------" << std :: endl;
            std :: cout << "|   Index  |First Name| Last Name| Nickname |"<< std :: endl;
            std :: cout << "---------------------------------------------" << std :: endl;
            std:: cout << std ::setw(10) << contact[i]._getIndex(); std :: cout << "|";
            std :: cout << std ::setw(10) << printed_len(contact[i]._getFistName()) ;std :: cout << "|";
            std :: cout << std ::setw(10) << printed_len(contact[i]._getLastName()) ;std :: cout << "|";
            std :: cout << std ::setw(10) << printed_len(contact[i]._getNickName());std :: cout << "|" << std :: endl;
        }
    }
}
void PhoneBook ::  _printContact(int index) const
{
        if(!contact[index]._getFistName().empty()){
            std :: cout << "---------------------------------------------" << std :: endl;
            std :: cout << "|   Index  |First Name| Last Name| Nickname |"<< std :: endl;
            std :: cout << "---------------------------------------------" << std :: endl;
            std :: cout << std ::setw(10)<< contact[index]._getIndex(); std :: cout << "|";
            std :: cout << std ::setw(10)<< printed_len(contact[index]._getFistName());std :: cout << "|";
            std :: cout << std ::setw(10)<< printed_len(contact[index]._getLastName());std :: cout << "|";
            std :: cout << std ::setw(10)<< printed_len(contact[index]._getNickName());std :: cout << "|" << std :: endl;
        }
        else
            std :: cout << "This Contact does not exist" << std :: endl;
        return;
}
std :: string trim_spaces(std :: string str)
{
    int start = 0;
    int end = str.length();
    while(start < end && std :: isspace(str[start]))
        start++;
    while(start < end && std :: isspace(str[end -1]))
        end--;
    return(str.substr(start,end-start));   
}
void PhoneBook :: set_cmd() {
    
    while(1)
    {
        std :: cout << "Please enter a command : " ;
        std :: string input;
        std :: getline(std :: cin,input);
        input = trim_spaces(input);
        if(std :: cin.eof()==1 || std :: cin.fail() || std :: cin.bad())
        {
            std :: cin.clear();
            std::cin.ignore();
            break;
        }
        if(input == "ADD")
        {
            std :: cout <<"-----Please enter your contact information-----"<<std::endl;
            _addContact();
                std :: cout << contact->_getIndex() << std :: endl;
            
        }
        else if(input == "SEARCH")
        {
             _displayContacts();
            std :: cout << "---Please enter the index of the contact you want to display--"<< std :: endl;
            int index;
            std :: cin >> index;
            if(std :: cin.good() &&  index >=0 && index <8 )
            {
                _printContact(index);
                 std :: cin.clear();
                std::cin.ignore();
            }
            else 
                std :: cout << "Error Please enter a number between 0 and 8" << std :: endl;
        }
        else if(input == "EXIT")
        {
            break;
        }
        else 
            std :: cout << "Please try again !" << std :: endl;
    }
        
}