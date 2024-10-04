/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:40:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 11:14:05 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure(void)
{
	// std::cout << "Default Cure constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(Cure const & copy)
{
	// std::cout << "Copy Cure constructor called" << std::endl;
	*this = copy;
	return ;
}

Cure &	Cure::operator=(Cure const & src)
{
	// std::cout << "Copy assignment Cure operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

Cure::~Cure(void)
{
	// std::cout << "Default Cure destructor called" << std::endl;
}

std::string const & Cure::getType(void) const
{
	return (this->_type);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
