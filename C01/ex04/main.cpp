/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:13:05 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/05 00:34:44 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int ac, char *argv[])
{
	(void)argv;
	if (ac == 4)
	{
		std ::ifstream read_file;
		std ::string line;
        size_t pos;
		read_file.open(argv[1]);
		if (!read_file)
		{
			std ::cout << "Failed to open file" << std ::endl;
			return (1);
		}
		std ::ofstream write_file(argv[1] + std ::string(".replace"));
        if(!write_file)
        {
            std ::cout << "Failed to create file" << std ::endl;
            return (1);
        }
		while (std ::getline(read_file, line,'\n'))
		{
            pos = line.find(argv[2]);
			while (pos != std ::string ::npos && strlen(argv[2]))
			{
                line = line.substr(0,pos) + argv[3] + line.substr(pos + strlen(argv[2]));
                pos = line.find(argv[2], pos + strlen(argv[3]));
			}
        
            write_file << line << std ::endl;
		}
        read_file.close();
        write_file.close();
	}
	else
	{
		std ::cout << "Wrong arguments" << std ::endl;
		return (1);
	}
    return(0);
}