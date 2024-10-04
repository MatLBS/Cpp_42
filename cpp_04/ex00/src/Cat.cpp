/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:58:06 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 17:02:33 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->_type = "Cat";
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
		this->_type = src.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << this->_type << " is meowing !" << std::endl;
}
