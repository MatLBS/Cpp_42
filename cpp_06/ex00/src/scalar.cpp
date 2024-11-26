/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scalar.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:34:45 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 10:56:12 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/scalar.hpp"

ScalarConverter::ScalarConverter(void)
{}

ScalarConverter::ScalarConverter(ScalarConverter const & copy)
{
	*this = copy;
}

ScalarConverter &	ScalarConverter::operator=(ScalarConverter const & src)
{
	(void)src;
	return (*this);
}

ScalarConverter::~ScalarConverter(void)
{}

void	print_char(std::string str)
{
	char c = *str.c_str();
	std::cout << "char: '" << c << "'"<< std::endl;
	std::cout << "int: " << static_cast<int>(c) <<std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(c) << std::endl;
}

void	print_int(std::string str)
{
	int i = std::atoi(str.c_str());

	if (i <= 0 || i > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i <<std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void	print_float(std::string str)
{
	size_t	nb;
	float f = std::strtof(str.c_str(), NULL);

	nb = str.find(".");
	while(str[nb + 2])
		nb++;
	nb -= str.find(".");
	if (static_cast<int>(f) <= 0 || static_cast<int>(f) > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(nb) << f << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void	print_double(std::string str)
{
	size_t	nb;
	double	d = std::atof(str.c_str());

	nb = str.find(".");
	while(str[nb + 1])
		nb++;
	nb -= str.find(".");
	if (static_cast<int>(d) <= 0 || static_cast<int>(d) > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(nb) << static_cast<float>(d) << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	handle_nan(void)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: nanf" << std::endl;
	std::cout << "double: nan"  << std::endl;
}

void	handle_inf(std::string str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "-inff" || str == "-inf")
	{
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf"  << std::endl;
	}
	else
	{
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf"  << std::endl;
	}
}

void	display_error(void)
{
	std::cout << "Error: Wrong input. The possibilities are double, float, int or char" << std::endl;
	exit(EXIT_FAILURE);
}

static void	detectType(std::string str)
{
	if (std::atol(str.c_str()) < INT_MIN || std::atol(str.c_str()) > INT_MAX || str.size() > 10)
		display_error();
	if (std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		if (str == "-inff" || str == "+inff" || str == "inff" || str == "-inf" || str == "+inf" || str == "inf")
			handle_inf(str);
		else if (str == "nanf" || str == "nan")
			handle_nan();
		else if (std::isprint(str[0]) && str.length() == 1)
			print_char(str);
		else
			display_error();
	}
	else if (str[str.length() - 1] == 'f')
	{
		for (int i = 0; str[i]; i++)
		{
			if ((isalpha(str[i]) && str[i] != 'f') || (str[i] == 'f' && i != (int)str.size() - 1))
				display_error();
			if ((str[i] == '-' || str[i] == '+') && i > 0)
				display_error();
			if (str[i] == '.' && i == (int)(str.size() - 2))
				display_error();
		}
		if (std::find(str.begin(), str.end(), '.') != str.end())
			print_float(str);
		else
			display_error();
	}
	else if (std::find(str.begin(), str.end(), '.') != str.end())
	{
		for (int i = 0; str[i]; i++)
		{
			if (isalpha(str[i]))
				display_error();
			if ((str[i] == '-' || str[i] == '+') && i > 0)
				display_error();
			if (str[i] == '.' && i == (int)(str.size() - 1))
				display_error();
		}
		if (std::find(str.begin(), str.end(), '.') != str.end())
			print_double(str);
		else
			display_error();
	}
	else if (std::isdigit(str[0]) || std::isdigit(str[1]))
	{
		for (int i = 0; str[i]; i++)
		{
			if ((str[i] == '-' || str[i] == '+') && i > 0)
				display_error();
		}
		print_int(str);
	}
	else
		display_error();

}

void * ScalarConverter::convert(std::string test)
{
	detectType(test);
	return (0);
}
