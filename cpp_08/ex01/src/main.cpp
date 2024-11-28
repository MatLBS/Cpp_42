/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:41:12 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/27 15:13:14 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const Span::TooManyNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Span::NotEnoughNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "___________________________________________" << std::endl << std::endl;
	Span sp1 = Span(2);
	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
	}
	catch (const Span::TooManyNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "___________________________________________" << std::endl << std::endl;
	Span sp2 = Span(2);
	try
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch (const Span::NotEnoughNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		sp2.addNumber(6);
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch (const Span::NotEnoughNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "___________________________________________" << std::endl << std::endl;
	Span sp3 = Span(11000);
	try
	{
		sp3.fill(sp.getVector());
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch (const Span::TooManyNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const Span::NotEnoughNumbers & e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
