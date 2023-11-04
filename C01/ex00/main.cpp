/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:58:42 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/04 14:52:11 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac,char *argv[])
{
	(void)argv;
	if(ac == 1){
		Zombie *zombie = newZombie("breaking bad");
		zombie->announce();
		delete (zombie);
		randomChump("LOLO");
	}
	else 
	{
		std :: cout << "Wrong arguments" << std :: endl;
		return(1);
	}
	return(0);
}