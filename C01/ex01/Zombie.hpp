/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:38:07 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/26 15:46:26 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    private:
    std :: string name;
    public:
    void announce (void);
    void _setName(std :: string name);
    Zombie();
    ~Zombie();
    
};
Zombie*zombieHorde(int N,std::string name);
#endif