/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:54:10 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 08:38:51 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"

int	main(void)
{
	Point A(3, 0);
	Point B(0, 5);
	Point C(5, 6);
	Point point(2, 7);
	Point point2(3, 4);
	Point point3(5, 6);

	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	std::cout << point << std::endl;
	std::cout << point2 << std::endl;
	std::cout << point3 << std::endl;

	if (bsp(A, B, C, point) == true)
		std::cout << "the coordinate point {" << point.getX() << "; " << point.getY() << "} is in the triangle" << std::endl;
	else
		std::cout << "the coordinate point {" << point.getX() << "; " << point.getY() << "} is not in the triangle" << std::endl;

	if (bsp(A, B, C, point2) == true)
		std::cout << "the coordinate point2 {" << point2.getX() << "; " << point2.getY() << "} is in the triangle" << std::endl;
	else
		std::cout << "the coordinate point2 {" << point2.getX() << "; " << point2.getY() << "} is not in the triangle" << std::endl;

	if (bsp(A, B, C, point3) == true)
		std::cout << "the coordinate point3 {" << point3.getX() << "; " << point3.getY() << "} is in the triangle" << std::endl;
	else
		std::cout << "the coordinate point3 {" << point3.getX() << "; " << point3.getY() << "} is not in the triangle" << std::endl;

	Point A1(0, 0);
	Point B1(0, 5);
	Point C1(6, 0);
	Point point4(2, 0);

	std::cout << "A1 = " << A1 << std::endl;
	std::cout << "B2 = " << B1 << std::endl;
	std::cout << "C2 = " << C1 << std::endl;
	std::cout << "Point4 = " << point4 << std::endl;

	if (bsp(A1, B1, C1, point4) == true)
		std::cout << "The coordinate point4 {" << point4.getX() << "; " << point4.getY() << "} is in the triangle" << std::endl;
	else
		std::cout << "The coordinate point4 {" << point4.getX() << "; " << point4.getY() << "} is not in the triangle" << std::endl;

	return (0);
}
