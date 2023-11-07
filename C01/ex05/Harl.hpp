/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:58:18 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/06 23:40:21 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
class Harl{
    private :
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    public :
    Harl();
    ~Harl();
    void complain(std::string level);
    
};
typedef void (Harl::*ptrfunc)(void);

#endif