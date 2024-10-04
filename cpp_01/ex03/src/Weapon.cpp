/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 12:46:17 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:53:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string name): _type(name)
{
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

const std::string& Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string new_type)
{
	this->_type = new_type;
	return ;
}
