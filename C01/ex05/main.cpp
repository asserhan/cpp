/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:58:20 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/07 19:58:40 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **argv)
{
	(void)argv;
	if (ac == 1)
	{
		Harl harl;
		harl.complain("debug");
		harl.complain("info");
		harl.complain("warning");
		harl.complain("error");
		return (0);
	}
	else
	{
		std::cout << "Wrong arguments" << std::endl;
		return (1);
	}
}