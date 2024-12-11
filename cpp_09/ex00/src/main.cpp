/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:44:38 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/28 15:28:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Bitcoin btc;

	if (ac != 2)
	{
		std::cout << "Invalid input, please enter ./btc <include/input.txt>" << std::endl;
		return 0;
	}
	try
	{
		btc.read_input("include/data.csv", btc.getMap());
		btc.get_Value(av[1], btc.getMap());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
