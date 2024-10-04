/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:15:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:50:13 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(void)
{
	// std::cout << "Constructor called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return;
}
