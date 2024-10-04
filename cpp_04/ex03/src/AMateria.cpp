/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 09:40:56 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 11:13:26 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(void)
{
	// std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	// std::cout << "Parametric AMateria constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & copy)
{
	// std::cout << "Copy AMateria constructor called" << std::endl;
	*this = copy;
}

AMateria &	AMateria::operator=(AMateria const & src)
{
	// std::cout << "Copy assignment AMateria operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

AMateria::~AMateria(void)
{
	// std::cout << "Default AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
	// std::cout << "AMateria use function called" << std::endl;
}

