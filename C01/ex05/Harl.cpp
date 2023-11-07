/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:58:15 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/07 19:58:44 by hasserao         ###   ########.fr       */
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
}
void Harl ::info(void)
{
	std ::cout << "I cannot believe adding extra bacon cost more money.You don’t put enough! If you did I would not have to ask for it!" << std ::endl;
}
void Harl ::warning(void)
{
	std ::cout << "I think I deserve to have some extra bacon for free.I’ve been coming here for years and you just started working here last month." << std ::endl;
}
void Harl ::error(void)
{
	std ::cout << "This is unacceptable,
		I want to speak to the manager now." << std ::endl;
}

void Harl ::complain(std::string level)
{
	ptrfunc ptrf[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"debug", "info", "warning", "error"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			(this->*ptrf[i])();
	}
	return ;
}