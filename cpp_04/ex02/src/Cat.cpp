/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:58:06 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/02 14:59:32 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void): AAnimal()
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const & copy)
{
	std::cout << "Copy Cat constructor called" << std::endl;
	*this = copy;
	return ;
}

Cat &	Cat::operator=(Cat const & src)
{
	std::cout << "Copy assignment Cat operator called" << std::endl;
	if (this != &src)
	{
		this->_type = src.getType();
		if (this->_brain)
			delete (this->_brain);
		this->_brain = new Brain(*src._brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete (this->_brain);
}

Brain *	Cat::getBrain(void) const
{
	return (this->_brain);
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " is meowing !" << std::endl;
}
