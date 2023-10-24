/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:37 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/24 22:28:59 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void  Zombie :: _setName(std :: string name) {
    this->name = name;
}
std :: string Zombie :: _getName() const{
    return(this->name);
}
void Zombie ::  announce (void){
    std :: cout <<  _getName() << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}