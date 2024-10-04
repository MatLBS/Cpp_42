/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:26:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 14:50:01 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

// int main( void )
// {
// 	Fixed a;
// 	Fixed b(10);
// 	Fixed c(20);
// 	Fixed d(b);

// 	a = b / c;

// 	b = c + d;

// 	c = a * d;

// 	d = b - c;

// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;

// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	return (0);
// }

// int main( void )
// {
// 	Fixed a(20.96f);
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;

// 	std::cout << b << std::endl;


// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return (0);
// }

int main( void )
{
	Fixed a;
	Fixed b(10);
	Fixed c(20);
	Fixed d(b);

	a = 30;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	a = 20;
	if (a < c)
		std::cout << "a is smaller than c" << std::endl;
	else if (a <= c)
		std::cout << "a is equal to c" << std::endl;
	else
		std::cout << "a is bigger than c" << std::endl;
	return (0);
}
