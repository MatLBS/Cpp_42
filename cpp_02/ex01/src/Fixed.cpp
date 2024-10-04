/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:23:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 12:14:50 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy)
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

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = nb * (1 << this->_bits);
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = static_cast<int>(roundf(nb * (1 << this->_bits)));
	return ;
}

float	Fixed::toFloat(void) const
{
	float	nb;

	nb = static_cast<float>(this->_n) / (1 << this->_bits);
	return (nb);
}

int		Fixed::toInt(void) const
{
	int	nb;

	nb = this->_n / (1 << this->_bits);
	return (nb);
}

std::ostream &operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

int	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return ;
}
