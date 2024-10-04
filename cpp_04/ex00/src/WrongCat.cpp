/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:43:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/30 14:46:57 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "Default WrongCat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & copy)
{
	std::cout << "Copy WrongCat constructor called" << std::endl;
	*this = copy;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & src)
{
	std::cout << "Copy assignment WrongCat operator called" << std::endl;
	if (this != &src)
		this->_type = src.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->_type << " is meowing !" << std::endl;
}
