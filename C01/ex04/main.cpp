/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:13:05 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/08 23:42:13 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int	main(int ac, char *argv[])
{
	(void)argv;
	if (ac == 4)
	{
		if(ft_replace(argv))
			return (1);
	}
	else
	{
		std ::cout << "Wrong arguments" << std ::endl;
		return (1);
	}
    return(0);
}