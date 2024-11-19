/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:34:24 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/19 09:59:42 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/scalar.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ScalarConverter::convert(av[1]);
		return (0);
	}
	std::cout << "Usage: ./convert [string]" << std::endl;
	return (0);
}
