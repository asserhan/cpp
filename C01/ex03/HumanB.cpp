/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:20:45 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 20:47:43 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB :: HumanB(std :: string name_B) : name(name_B){
    
}
HumanB :: ~HumanB(){
    
}
void HumanB :: attack()
{
    if(weapon->getType() != "" && weapon !=NULL)
        std :: cout << this->name << " attacks with their " << weapon->getType() << std ::endl;
    else
        std :: cout << this->name << " does not have a weapon" << std :: endl;
        
}
void HumanB :: setWeapon(Weapon weapon_B){
   this->weapon =new Weapon(weapon_B);

   
}