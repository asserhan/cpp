/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:20:45 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/03 19:26:13 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB ::HumanB(std ::string name_B)
	: weapon(nullptr), name(name_B)
{
}
HumanB ::~HumanB()
{
}
void HumanB ::attack()
{
	if (weapon->getType() != "" && weapon != NULL)
		std ::cout << this->name << " attacks with their " << weapon->getType() << std ::endl;
	else
		std ::cout << this->name << " is unarmed " << std ::endl;
}
void HumanB ::setWeapon(Weapon &weapon_B)
{
	this->weapon = &weapon_B;
}