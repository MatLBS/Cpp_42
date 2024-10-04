/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:50:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 08:28:26 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <cstring>
# include <cmath>
# include "Fixed.hpp"

class Point {

public:

	Point(void);
	Point(const float a, const float b);
	Point(Point & copy);
	Point & operator=(Point const & src);
	~Point(void);

	float	getX(void) const;
	float	getY(void) const;

private:

	Fixed	_x;
	Fixed	_y;
};

std::ostream	&operator<<(std::ostream & o, Point const & i);
bool	bsp(Point const a, Point const b, Point const c, Point const point);
float	pdV(Point const & v1, Point const & v2, Point const & p);

#endif
