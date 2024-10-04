/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 11:17:36 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/25 14:57:47 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

float	pdV(Point const & v1, Point const & v2, Point const & p)
{
	float	nb;

	nb = (((v2.getX() - p.getX()) * (v1.getY() - p.getY())) - ((v2.getY() - p.getY()) * (v1.getX() - p.getX())));
	return (nb);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float point_a = pdV(a, b, point);
	float point_b = pdV(c, a, point);
	float point_c = pdV(b, c, point);

	std::cout << "point_a = " << point_a << std::endl;
	std::cout << "point_b = " << point_b << std::endl;
	std::cout << "point_c = " << point_c << std::endl;

	if ((point_a > 0 && point_b > 0 && point_c > 0) || (point_a < 0 && point_b < 0 && point_c < 0))
		return (true);
	else
		return (false);
}
