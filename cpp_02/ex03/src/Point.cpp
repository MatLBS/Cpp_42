/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:17:39 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 08:33:35 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Point::Point(const float a, const float b)
{
	// std::cout << "_x = " << _x << std::endl;
	// std::cout << "_y = " << _y << std::endl;
	this->_x.setRawBits(a);
	this->_y.setRawBits(b);
	return ;
}

Point::Point(Point & copy): _x(copy._x), _y(copy._y)
{
	// std::cout << "Copy constructor called" << std::endl;
	return ;
}

Point &	Point::operator=(Point const & src)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	(void)src;
	return (*this);
}

Point::~Point(void)
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

float	Point::getX(void) const
{
	return (this->_x.getRawBits());
}

float	Point::getY(void) const
{
	return (this->_y.getRawBits());
}

std::ostream	&operator<<(std::ostream & o, Point const & i)
{
	o << '{' << i.getX() << "; " << i.getY() << '}';
	return (o);
}
