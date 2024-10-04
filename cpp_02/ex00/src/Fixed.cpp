/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:11:49 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/30 09:02:16 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../include/Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed & copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & src)
{
	std::cout << "Copy assignment operator called" << std::endl;

	if (this != &src)
		this->_n = src.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_n = raw;
	return ;
}

