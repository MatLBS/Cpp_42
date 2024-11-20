/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:44:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/20 17:01:07 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

Bitcoin::Bitcoin(void){};

Bitcoin::~Bitcoin(void){};

void	Bitcoin::read_input(std::string str, std::map<std::string, double> data)
{
	std::string		date, value;
	std::ifstream	infile(str.c_str());
	if (!infile)
		throw(std::invalid_argument("Failed to open the infile."));
	while (infile)
	{
		std::getline(infile, date, ',');
		std::getline(infile, value, '\0');
		data.insert(std::pair<std::string, double>(date, std::atof(value.c_str())));
		// mymap.insert ( std::pair<char,int>('a',100) );
	}
}
