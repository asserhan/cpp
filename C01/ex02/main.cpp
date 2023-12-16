/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 17:15:41 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/04 14:53:08 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std :: string var = "HI THIS IS BRAIN";
    std :: string *stringPTR =  &var;
    std :: string &stringREF = var;
    std :: cout << "The memory address of the string variable is : "<< &var << std ::endl;
    std :: cout << "The memory address held by stringPTR is : " << &stringPTR << std ::endl;
    std :: cout << "The memory address held by stringREF is : " << &stringREF << std ::endl;
    std :: cout << "------------------------------------------" << std ::endl; 
    std :: cout << "The value of the string variable is : " << var << std ::endl;
    std :: cout << "The value pointed to by stringPTR is : " << *stringPTR << std ::endl;
    std :: cout << "The value pointed to by stringREF is : " << stringREF << std ::endl;
    return(0);
}