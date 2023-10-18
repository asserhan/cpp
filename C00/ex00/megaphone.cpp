/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:32 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/18 16:58:04 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac,char **argv)
{
    int i,j;
    char c;
    i= 0;
    if(ac == 1)
        std :: cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std :: endl;
    else{
        while(argv[++i])
        {
            j=-1;
            while(argv[i][++j])
            {
            
                c = toupper(argv[i][j]);
                std :: cout << c ;
            }
            
        }
    }
    return(0);
    
}

