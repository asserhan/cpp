/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:38:03 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/26 15:50:53 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie()
{

}
Zombie :: ~Zombie()
{
     std :: cout << "zombie has been destroyed" << std ::endl;
}
void Zombie :: _setName(std :: string name)
{
    this->name = name;
}
void Zombie ::  announce (void){
    std :: cout <<  this->name << ": BraiiiiiiinnnzzzZ..." << std :: endl;
}