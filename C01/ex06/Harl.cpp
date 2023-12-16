/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:58:15 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/07 21:05:22 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}
Harl::~Harl()
{
}

void Harl ::debug(void)
{
	std::cout << "Ilove having extra bacon for my 7XL-double-cheese-triple-pickle-special ketchup burger.I really do!" << std::endl;
    std :: cout << std ::endl;
}
void Harl ::info(void)
{
    std ::cout << "I cannot believe adding extra bacon cost more money.You don’t put enough! If you did I would not have to ask for it!" << std ::endl;
    std :: cout << std ::endl;
}
void Harl :: warning(void)
{
    std ::cout << "I think I deserve to have some extra bacon for free.I’ve been coming here for years and you just started working here last month." << std ::endl;
    std :: cout << std ::endl;
}
void Harl :: error(void)
{
    std ::cout << "This is unacceptable, I want to speak to the manager now." << std ::endl;
    std :: cout << std ::endl;
}

void Harl :: complain(std::string level)
{
    int i;
    ptrfunc ptrf[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(i = 0; i < 4; i++)
    {
        if (levels[i] == level)
            break;
    }
    switch (i)
    {
    case 0:
        std ::cout << "[ DEBUG ]" << std ::endl;
        (this->*ptrf[0])();
    case 1:
        std ::cout << "[ INFO ]" << std ::endl;
        (this->*ptrf[1])();
    case 2:
        std ::cout << "[ WARNING ]" << std ::endl;
        (this->*ptrf[2])();
    case 3:
        std ::cout << "[ ERROR ]" << std ::endl;
        (this->*ptrf[3])();
        break;
    default:
        std ::cout << "[ Probably complaining about insignificant problems ]" << std ::endl;
    }
    return ;
}