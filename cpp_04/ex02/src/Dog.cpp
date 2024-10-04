/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:58:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 14:59:27 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog(void): AAnimal()
{
	std::cout << "Default Dog constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
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
	{
		this->_type = src.getType();
		if (this->_brain)
			delete (this->_brain);
		this->_brain = new Brain(*src.getBrain());
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete (this->_brain);
}

Brain *	Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::makeSound(void) const
{
	std::cout << this->_type << " is barking !" << std::endl;
}
