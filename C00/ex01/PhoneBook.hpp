/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 20:17:03 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/31 18:31:40 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
  private:
	Contact contact[8];

  public:
	void set_cmd();
	void _addContact();
	void _displayContacts() const;
	void _printContact(int index) const;
};
bool	_isDigit(const std ::string str);
#endif