/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:30:11 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/23 17:44:58 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int ac,char *argv[])
{
   (void)argv;
    if(ac == 1)
    {
        PhoneBook contacts;
        contacts.set_cmd();
    }
    else
        std :: cout << "Wrong arguments"<< std :: endl;
    
}