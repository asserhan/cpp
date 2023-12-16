/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:15:29 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/03 19:25:53 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include "Weapon.hpp"
# include <iostream>
class HumanA
{
  private:
	Weapon &weapon;
	std ::string name;

  public:
	HumanA(std ::string name_A, Weapon &weapon_A);
	~HumanA();
	void attack();
};
#endif