/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:38:03 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 06:55:31 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std :: string name)
{
    this->name = name;
}
void Zombie ::  announce (void){
    std :: cout <<  this->name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}