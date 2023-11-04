/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:13:05 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/04 14:57:34 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac,char *argv[])
{
    (void) argv;
    if(ac == 4)
    {
        std ::ifstream read_file;
        read_file.open(argv[1]);
        if(!read_file)
        {
            std :: cout << "Failed to open file"<< std :: endl;
            return(1);
        }
        
        
        
    }
    else{
        std :: cout << "Wrong arguments"<< std :: endl;
        return(1);
    }
}