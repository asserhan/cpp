/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:20:50 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/03 19:26:53 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include "Weapon.hpp"

class HumanB
{
  private:
	Weapon *weapon;
	std ::string name;

  public:
	HumanB(std ::string name_B);
	~HumanB();
	void setWeapon(Weapon &weapon_B);
	void attack();
};
#endif