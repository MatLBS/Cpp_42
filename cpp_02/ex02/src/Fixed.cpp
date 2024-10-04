/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:26:25 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 14:48:31 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed(void): _n(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &copy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	return ;
}

Fixed::Fixed(const int nb)
{
	// std::cout << "Int constructor called" << std::endl;
	this->_n = nb * (1 << this->_bits);
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = static_cast<int>(roundf(nb * (1 << this->_bits)));
	return ;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &	Fixed::operator=(Fixed const & src)
{
	// std::cout << "Copy assignment operator called" << std::endl;

	if (this != &src)
		this->_n = src.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(Fixed const & src)
{
	// std::cout << "Addition operator called" << std::endl;
	float	nb;
	Fixed result;

	nb = this->getRawBits() + src.getRawBits();
	result.setRawBits(nb);
	return (result);
}

Fixed	Fixed::operator-(Fixed const & src)
{
	// std::cout << "Soustraction operator called" << std::endl;
	float	nb;
	Fixed result;

	nb = this->getRawBits() - src.getRawBits();
	result.setRawBits(nb);
	return (result);
}

Fixed	Fixed::operator*(Fixed const & src)
{
	// std::cout << "Multiplication operator called" << std::endl;
	float	nb;
	Fixed result;

	nb = (this->getRawBits() * src.getRawBits()) / (1 << this->_bits);
	result.setRawBits(nb);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & src)
{
	// std::cout << "Division operator called" << std::endl;
	float	nb;
	Fixed result;

	nb = roundf((this->getRawBits() / src.getRawBits()) * (1 << this->_bits));
	result.setRawBits(nb);
	return (result);
}

Fixed &	Fixed::operator++(void)
{
	// std::cout << "Pre-incrementation ++ called" << std::endl;
	this->_n += 1.0;
	return (*this);
}

Fixed	Fixed::operator++(int nb)
{
	(void)nb;
	// std::cout << "Post-incrementation ++ called" << std::endl;
	Fixed temp = *this;
	++*this;
	return (temp);
}

Fixed &	Fixed::operator--(void)
{
	// std::cout << "Pre-incrementation -- called" << std::endl;
	this->_n -= 1.0;
	return (*this);
}

Fixed	Fixed::operator--(int nb)
{
	(void)nb;
	// std::cout << "Post-incrementation -- called" << std::endl;
	Fixed temp = *this;
	--*this;
	return (temp);
}

Fixed & Fixed::min(Fixed & src, Fixed & src2)
{
	if (src < src2)
		return (src);
	else
		return (src2);
}

const Fixed & Fixed::min(Fixed const & src, Fixed const & src2)
{
	if (src < src2)
		return (src);
	else
		return (src2);
}

Fixed & Fixed::max(Fixed & src, Fixed & src2)
{
	if (src > src2)
		return (src);
	else
		return (src2);
}

const Fixed & Fixed::max(Fixed const & src, Fixed const & src2)
{
	if (src > src2)
		return (src);
	else
		return (src2);
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

float	Fixed::getRawBits(void) const
{
	return (this->_n);
}

void	Fixed::setRawBits(float const raw)
{
	this->_n = raw;
	return ;
}

std::ostream	&operator<<(std::ostream & o, Fixed const & i)
{
	o << i.toFloat();
	return (o);
}

bool	Fixed::operator<(Fixed const & str) const
{
	if (this->getRawBits() < str.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>(Fixed const & str) const
{
	if (this->getRawBits() > str.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const & str) const
{
	if (this->getRawBits() >= str.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const & str) const
{
	if (this->getRawBits() <= str.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const & str) const
{
	if (this->getRawBits() == str.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const & str) const
{
	if (this->getRawBits() != str.getRawBits())
		return (true);
	else
		return (false);
}
