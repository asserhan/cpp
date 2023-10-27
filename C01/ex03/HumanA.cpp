/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:15:31 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 20:21:31 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(std ::string name_A,Weapon& weapon_A) :weapon(weapon_A), name(name_A){
    
}
HumanA :: ~HumanA(){
    
}
void HumanA :: attack (){
    if(weapon.getType() != "")
        std :: cout << this->name << " attacks with their " << weapon.getType() << std ::endl;
    else
        std :: cout << this->name << " does not have a weapon "<< std ::endl;
}