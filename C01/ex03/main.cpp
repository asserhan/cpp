/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:19:49 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/05 00:04:18 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(int ac, char *argv[])
{
	(void)argv;
	if (ac == 1)
	{
		{
			Weapon club = Weapon("crude spiked club");
			HumanA bob("Bob", club);
			bob.attack();
			club.setType("some other type of club");
			bob.attack();
		}
		{
			Weapon club = Weapon("crude spiked club");
			HumanB jim("Jim");
			jim.setWeapon(club);
			jim.attack();
			club.setType("some other type of club");
			jim.attack();
		}
		{
			HumanB hamid("hamid");
			hamid.attack();
		}
	}
	else{
	
		std ::cout << "Wrong argument" << std ::endl;
		return(1);
	}
	return(0);
}