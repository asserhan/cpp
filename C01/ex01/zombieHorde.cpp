/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:38:09 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 06:56:02 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
    Zombie *zombie;
	for (int i = 0; i < N; i++)
	{
		zombie = new Zombie(name);
        zombie->announce();
	}
    return(zombie);
}