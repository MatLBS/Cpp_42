/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:22:52 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 18:55:09 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int	main(void)
{
	Array<int>	intArr = Array<int>(5);
	try
	{
		std::cout << intArr.at(4) << std::endl;
	}
	catch(const Array<int>::IndexOutOfBounds & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
