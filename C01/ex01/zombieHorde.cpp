/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:38:09 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/08 23:04:32 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if(N <= 0)
	{
		std :: cout << "Wrong number of zombies" << std :: endl;
		return(NULL);
	}
    Zombie *zombie =  new Zombie[N];
	if(!zombie)
		std :: cout << "Memory allocation failed" << std :: endl; 
	for(int i=0;i<N;i++)
		zombie->_setName(name);
    return(zombie);
}