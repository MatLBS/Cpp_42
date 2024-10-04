/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:09:46 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/30 14:27:59 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal(void): _type("Random Animal")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & copy)
{
	std::cout << "Copy Animal constructor called" << std::endl;
	*this = copy;
	return ;
}

Animal &	Animal::operator=(Animal const & src)
{
	std::cout << "Copy assignment Animal operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Default Animal destructor called" << std::endl;
}
std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "The animal " << this->_type << " made a random noise..." << std::endl;
}
