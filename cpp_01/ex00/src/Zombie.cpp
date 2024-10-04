/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:20:54 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 10:56:36 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie(std::string name): _name(name)
{
	// std::cout << "Constructor Zombie called" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor " << this->_name << " called" << std::endl;
	return ;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
