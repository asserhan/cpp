/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:40 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 02:54:37 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{
   private:
   std :: string name;
   public:
   void  announce (void);
   Zombie* newZombie( std::string name);
   Zombie(std :: string name);
   ~Zombie();
};

void randomChump( std::string name );

#endif