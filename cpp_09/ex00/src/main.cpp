/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:44:38 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/20 17:02:09 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

int	main(int ac, char **av)
{
	Bitcoin btc;
	std::map<std::string, double> data;

	if (ac != 3)
	{
		
	}

	btc.read_input("include/data.csv", data);
	for (std::map<std::string, double>::const_iterator it = data.begin(); it != data.end(); ++it)
	{
		std::cout << "bonjour" << std::endl;
		std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
	}
	return 0;
}
