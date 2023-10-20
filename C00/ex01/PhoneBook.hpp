/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:17:03 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/20 07:05:20 by hasserao         ###   ########.fr       */
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
};

#endif