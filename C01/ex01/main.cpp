/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:37:58 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/09 02:08:12 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac,char *argv[])
{
    (void)argv;
    if (ac == 1)
    {
        int N = 5;
        Zombie *zombie = zombieHorde(N,"Hanane");
        for (int i=0;i<N;i++)
            zombie->announce();
       delete[]zombie;
        
    }
    else
    {
        std :: cout <<  " Wrong Arguments" << std ::endl;
        return(1);
    }
    return(0);
}