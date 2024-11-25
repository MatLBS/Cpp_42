/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 14:44:23 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/25 11:57:19 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/BitcoinExchange.hpp"

Bitcoin::Bitcoin(void){};

Bitcoin::~Bitcoin(void){};

void	check_line(std::string str)
{
	struct tm tm;
	std::string		date, value;
	std::stringstream	new_str(str);
	std::getline(new_str, date, '|');
	std::getline(new_str, value);
	if (date[date.length() - 1] != ' ' || value[0] != ' ' || value[1] == ' ')
		throw(std::invalid_argument("Error: bad input => " + date + value));
	if (!strptime(date.c_str(), "%Y-%m-%d", &tm) || date.empty() || value.empty() || date.size() != 11)
		throw(std::invalid_argument("Error: bad input => " + date + value));
}

void	check_value(std::string value)
{
	if (std::atof(value.c_str()) > 1000)
		throw(std::invalid_argument("Error: too large a number."));
	if (std::atof(value.c_str()) < 0)
		throw(std::invalid_argument("Error: not a positive number."));
}

void	check_date(std::string date, std::string value)
{
	std::string	year, month, day;
	year = date.substr(0, 4);
	month = date.substr(5, 2);
	day = date.substr(8, 2);
	if (!std::strcmp(month.c_str(), "02") && std::atoi(day.c_str()) > 29)
		throw(std::invalid_argument("Error: bad input => " + date));
	if (!std::strcmp(month.c_str(), "02") && std::atoi(day.c_str()) == 29)
	{
		if ((std::atoi(date.c_str()) % 4 == 0 && std::atoi(date.c_str()) % 100 != 0) || std::atoi(date.c_str()) % 400 == 0);
		else
			throw(std::invalid_argument("Error: bad input => " + date));
	}
	check_value(value);
}

std::string	decrement_date(const std::string date, const char* format)
{
	struct tm tm = {};
	struct tm min_tm = {};
	if (!strptime(date.c_str(), format, &tm))
		throw(std::invalid_argument("Error: bad input => " + date));
	if (!strptime("2009-01-02", format, &min_tm))
		throw(std::invalid_argument("Error: bad input => " + date));
	time_t new_date = std::mktime(&tm);
	time_t min_date = std::mktime(&min_tm);
	new_date -= 86400;
	if (new_date < min_date)
		throw(std::invalid_argument("Error: the date => " + date + " does not exist in the dataset."));
	char buffer[90];
	struct tm* timeinfo = std::localtime(&new_date);
	strftime(buffer, sizeof(buffer), format, timeinfo);
	return buffer;
}

void	calculate_value(std::string date, std::string value, std::map<std::string, double> & data)
{
	while (1)
	{
		for (std::map<std::string, double>::const_iterator it = data.begin(); it != data.end(); ++it)
		{
			date.erase(std::remove_if(date.begin(), date.end(), ::isspace), date.end());
			value.erase(std::remove_if(value.begin(), value.end(), ::isspace), value.end());
			if (!std::strcmp(it->first.c_str(), date.c_str()))
			{
				std::cout << date << " => " << value << " = " << it->second * std::atof(value.c_str()) << std::endl;
				return ;
			}
		}
		date = decrement_date(date, "%Y-%m-%d");
	}
}


void	Bitcoin::read_input(std::string str, std::map<std::string, double> & data)
{
	std::string		date, value;
	std::ifstream	infile(str.c_str());
	if (!infile)
		throw(std::invalid_argument("Failed to open the infile."));
	while (infile)
	{
		std::getline(infile, date, ',');
		std::getline(infile, value);
		data.insert(std::pair<std::string, double>(date, std::atof(value.c_str())));
	}
}

void	Bitcoin::get_Value(std::string str, std::map<std::string, double> & data)
{
	std::string		line, first;
	std::ifstream	infile(str.c_str());
	if (!infile)
		throw(std::invalid_argument("Failed to open the infile."));
	std::getline(infile, first);
	while (infile)
	{
		std::getline(infile, line);
		try{
			if (!line.empty())
				check_line(line);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
			continue ;
		}
		std::string	value;
		std::string	date;
		std::stringstream	str(line);
		std::getline(str, date, '|');
		std::getline(str, value);
		try {
			if (!date.empty())
			{
				check_date(date, value);
				calculate_value(date, value, data);
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}
