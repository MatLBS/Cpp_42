/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:58:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 17:02:37 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const & copy)
{
	std::cout << "Copy Dog constructor called" << std::endl;
	*this = copy;
	return ;
}

Dog &	Dog::operator=(Dog const & src)
{
	std::cout << "Copy assignment Dog operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " is barking !" << std::endl;
}
