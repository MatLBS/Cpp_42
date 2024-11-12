/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:54:10 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 11:07:28 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"
#include "../include/Point.hpp"
#include <sstream>
#include <cstdio>
#define POINT "\033[0;35m"

int	main(void)
{
	Point A(0, 0);
	Point B(0, 5);
	Point C(5, 0);
	Point point(4, 1);
	Point point2(4, 1.005);
	Point point3(4, 0.9);

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


// int	main( void ) {
// 	Point a;
// 	Point b(0, 5);
// 	Point c(5, 0);

// 	float x[] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
// 	float y[] = {1, 1.005, 1.004, 1.003, 1.002, 1.001, 1.0009, 1.0008, 1.0007, 1.0006};
// 	float h[] = {0.99994, 0.99995, 0.99996, 0.99997, 0.99998, 0.99999, 0.999991, 0.999992, 0.9999995, 0.9999994, };
// 	float z[] = {0.0099, 0.0098, 0.0097, 0.0096, 0.0095, 0.0094, 0.0091, 0.00000009, -0.0094, -0.00094};
// 	size_t size = sizeof(x) / sizeof(x[0]);
// 	std::cout << "size: " << size << std::endl;
// 	for(size_t i = 0; i < size; ++i)
// 	{
// 		Point p(x[i], y[i]);
// 		std::cout << "Point [ " << x[i] << " , " << y[i] << " ]" << std::endl;
// 		if (bsp(a, b, c, p))
// 			std::cout << "YES, your point is within the triangle!" << std::endl;
// 		else
// 			std::cout << "NO, your point is not within the triangle!" << std::endl;
// 	}
// 	for(size_t i = 0; i < size; ++i)
// 	{
// 		Point p(x[i], h[i]);
// 		std::cout << "Point [ " << x[i] << " , " << h[i] << " ]" << std::endl;
// 		if (bsp(a, b, c, p))
// 			std::cout << "YES, your point is within the triangle!" << std::endl;
// 		else
// 			std::cout << "NO, your point is not within the triangle!" << std::endl;
// 	}
// 	for(size_t i = 0; i < size; ++i)
// 	{
// 		Point p(x[i], z[i]);
// 		std::cout << "Point [ " << x[i] << " , " << z[i] << " ]" << std::endl;
// 		if (bsp(a, b, c, p))
// 			std::cout << "YES, your point is within the triangle!" << std::endl;
// 		else
// 			std::cout << "NO, your point is not within the triangle!" << std::endl;
// 	}
// 	return (0);
// }
