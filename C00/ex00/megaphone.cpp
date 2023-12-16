/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:04:32 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/24 21:17:24 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **argv)
{
	std ::string str;
	if (ac == 1)
		std ::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; i++)
		{
			str = argv[i];
			for (int j = 0; j < (int)str.length(); j++)
				std ::cout << (char)std ::toupper(str[j]);
		}
	}
	std ::cout << std ::endl;
	return (0);
}
