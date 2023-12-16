/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:15:10 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/31 22:11:03 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

void PhoneBook ::_addContact()
{
	static int	index;

	this->contact[index % 8].setinput();
	this->contact[index % 8].setIndex(index % 8);
	index++;
}
std ::string printed_len(std ::string str)
{
	if (str.length() > 10)
		str = str.substr(0, 9) + ".";
	return (str);
}
void PhoneBook ::_displayContacts() const
{
			std ::cout << "---------------------------------------------" << std ::endl;
			std ::cout << "|   Index  |First Name| Last Name| Nickname |" << std ::endl;
			std ::cout << "---------------------------------------------" << std ::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!contact[i]._getFistName().empty())
		{
			std ::cout << "|";
			std::cout << std ::setw(10) << contact[i]._getIndex();
			std ::cout << "|";
			std ::cout << std ::setw(10) << printed_len(contact[i]._getFistName());
			std ::cout << "|";
			std ::cout << std ::setw(10) << printed_len(contact[i]._getLastName());
			std ::cout << "|";
			std ::cout << std ::setw(10) << printed_len(contact[i]._getNickName());
			std ::cout << "|" << std ::endl;
		}
	}
}
void PhoneBook ::_printContact(int index) const
{
	if (!contact[index]._getFistName().empty())
	{
		std ::cout << "Index : " << contact[index]._getIndex()<<std ::endl;
		std ::cout << "First Name : "<< contact[index]._getFistName() <<std :: endl;
		std ::cout << "Last Name : " << contact[index]._getLastName() <<std ::endl;
		std ::cout << "Nick Name : " << contact[index]._getNickName() << std ::endl;
        std ::cout << "Phone Number : " << contact[index]._getPhone() << std :: endl;
        std ::cout << "Darkest Secret : "<< contact[index]._getDarksecret() << std :: endl;
	}
	else
		std ::cout << "This Contact does not exist" << std ::endl;
	return ;
}
std ::string trim_spaces(std ::string str)
{
	int	start;
	int	end;

	start = 0;
	end = str.length();
	while (start < end && std ::isspace(str[start]))
		start++;
	while (start < end && std ::isspace(str[end - 1]))
		end--;
	return (str.substr(start, end - start));
}
void PhoneBook ::set_cmd()
{
	while (1)
	{
		std ::cout << "Please enter a command : ";
		std ::string input;
		std ::getline(std ::cin, input);
		if (std ::cin.eof()  )
			exit(1);
		if (input == "ADD")
		{
			std ::cout << "-----Please enter your contact information-----" << std::endl;
			_addContact();
		}
		else if (input == "SEARCH")
		{
            if(contact[0]._getFistName().empty())
            {
                std :: cout << "the Phonebook is empty" << std ::endl;
                continue;
            }
			_displayContacts();
			std ::cout << "--Please enter the index of the contact you want to display--" << std ::endl;
			std ::string index;
			std :: getline(std :: cin,index);
            int nbr = atoi(index.c_str());
			if (_isDigit(index) && nbr >= 0 && nbr < 8 && !index.empty()) 
				_printContact(nbr);
			else
            {
				std ::cout << "Wrong index" << std ::endl;
                continue;
            }
		}
		else if (input == "EXIT")
			break ;
		else
			std ::cout << "Please try again !" << std ::endl;
	}
}