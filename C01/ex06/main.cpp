/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:48:11 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/07 20:50:14 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac,char *argv[])
{
    if(ac == 2)
    {
        Harl harlfiltred;
        harlfiltred.complain(argv[1]);
        return 0;
        
    }
    else{
        std :: cout << "Wrong argguments" << std ::endl;
        return 1;
    }
}