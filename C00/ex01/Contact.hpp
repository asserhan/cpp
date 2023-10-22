/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:18:35 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/22 16:00:56 by hasserao         ###   ########.fr       */
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
    static int index;
    public :
    void setIndex(int i);
    int _getIndex();
    //setters
    void setinput();
    //getters
    std::string getinput(std ::string str);
    Contact();
    ~Contact();
    
};



#endif