/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:58:42 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 02:51:50 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void ff()
{
    system("leaks zombie");
}
int main()
{
 atexit(ff);
   
  Zombie *zombie = newZombie("hhh");
  zombie->announce();
  delete(zombie);
  randomChump("LOLO");
}