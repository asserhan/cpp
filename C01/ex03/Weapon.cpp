/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:19:51 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 18:18:24 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std :: string const & Weapon :: getType()
{
    return(this->type);
}
void  Weapon :: setType(std :: string type){
    this->type=type;
}
Weapon :: Weapon(std ::string type){
    setType(type);
}
Weapon :: ~Weapon(){
    
}
