/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:15:29 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 16:07:15 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"
#include <iostream>
class HumanA{
    private:
    Weapon& weapon;
    std :: string name;
    HumanA(Weapon& weapon_A,std :: string name);
    ~HumanA();
    void attack();
};
#endif