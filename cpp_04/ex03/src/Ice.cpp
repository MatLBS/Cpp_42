/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:40:49 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 11:14:15 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice(void)
{
	// std::cout << "Default Ice constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(Ice const & copy)
{
	// std::cout << "Copy Ice constructor called" << std::endl;
	*this = copy;
	return ;
}

Ice &	Ice::operator=(Ice const & src)
{
	// std::cout << "Copy assignment Ice operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

Ice::~Ice(void)
{
	// std::cout << "Default Ice destructor called" << std::endl;
}

std::string const & Ice::getType(void) const
{
	return (this->_type);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
