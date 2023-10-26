/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 06:37:58 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/26 16:15:00 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
void ff(void)
{
    system("leaks ex01");
}
int main(int ac,char *argv[])
{
    (void)argv;
    if (ac == 1)
    {
        atexit(ff);
        int number;
        std :: cout << "Enter a number" << std :: endl;
        std :: cin >> number;
        if(number < 0)
            std :: cout << "Wrong number ! Please try again" << std :: endl;
        Zombie *zombie = zombieHorde(number,"Hanane");
        for (int i=0;i<number;i++)
            zombie->announce();
       delete[]zombie;
        
    }
    else
        std :: cout <<  " Wrong Arguments" << std ::endl;
    
}