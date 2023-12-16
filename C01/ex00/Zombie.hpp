/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hasserao <hasserao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 21:10:40 by hasserao          #+#    #+#             */
/*   Updated: 2023/10/25 04:44:40 by hasserao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie
{
  private:
	std ::string name;

  public:
	void announce(void);
	Zombie(std ::string name);
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif