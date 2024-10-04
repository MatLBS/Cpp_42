/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:46 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 14:55:25 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal(void): _type("Random AAnimal")
{
	std::cout << "Default AAnimal constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & copy)
{
	std::cout << "Copy AAnimal constructor called" << std::endl;
	*this = copy;
	return ;
}

AAnimal &	AAnimal::operator=(AAnimal const & src)
{
	std::cout << "Copy assignment AAnimal operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "Default AAnimal destructor called" << std::endl;
}
std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

Brain *	AAnimal::getBrain(void) const
{
	return (NULL);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "The AAnimal " << this->_type << " made a random noise..." << std::endl;
}
