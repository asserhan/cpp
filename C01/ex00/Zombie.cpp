/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:37 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 02:51:01 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std :: string name){
    this->name = name;
}

Zombie :: ~Zombie(){
    std :: cout << this->name << " is destroyed" << std ::endl;
}

void Zombie ::  announce (void){
    std :: cout <<  this->name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}