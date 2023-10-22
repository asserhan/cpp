/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:35 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/22 18:15:15 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>


class Contact{
    private:
    std :: string _first_name;
    std :: string _last_name;
    std :: string _nickname;
    std :: string _phone_number;
    std :: string _darkest_secret;
    int index;
    public :
    std::string getinput(std ::string str);
    void setIndex(int i);
    int _getIndex();
    //setters
    void setinput();
    //getters
    Contact();
    ~Contact();
    
};



#endif