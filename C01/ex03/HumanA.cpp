/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:15:31 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 16:11:11 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA :: HumanA(Weapon& weapon_A,std ::string name_A) : weapon(weapon_A),name(name_A){
    
}
HumanA :: ~HumanA(){
    
}
void HumanA :: attack (){
    if(weapon.getType() != "")
        std :: cout << this->name << "attacks with their" << weapon.getType() << std ::endl;
}