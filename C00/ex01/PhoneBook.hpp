/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:17:03 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/23 15:31:48 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP 
#define PHONEBOOK_HPP
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
    Contact contact[8];
    public:
    void set_cmd();
    void _addContact();
   void  _displayContacts();
    void  _display(PhoneBook _contact);
    void _printContact(int index);
};

#endif