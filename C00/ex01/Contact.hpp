/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:35 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/23 21:53:27 by hasserao         ###   ########.fr       */
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
    void setinput();
    void setIndex(int i);
    std::string getinput(std ::string str);
    std :: string  _getFistName ()const;
    std :: string _getLastName()const;
    std :: string _getNickName()const;
    int _getIndex()const;
    Contact();
    ~Contact();
    
};



#endif