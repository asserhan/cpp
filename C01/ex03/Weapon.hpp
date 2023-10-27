/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:19:54 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/27 18:14:44 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon{
    private:
    std :: string type;
    public:
    std :: string const & getType();
    void setType(std :: string type);
    Weapon(std :: string type);
    ~Weapon();
};
#endif