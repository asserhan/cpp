/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 23:39:59 by hasserao          #+#    #+#             */
/*   Updated: 2023/11/08 23:41:57 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"


int  ft_replace(char **argv)
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
		return (0);
}