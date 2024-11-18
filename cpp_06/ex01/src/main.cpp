/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:07:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/18 11:22:23 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serialize.hpp"

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		Data	data;

		data.nb = std::atoi(av[1]);
		data.str = av[2];
		Data	*new_data = Serialize::deserialize(Serialize::serialize(&data));
		std::cout << new_data->nb << std::endl;
		std::cout << new_data->str << std::endl;
		return (0);
	}
	std::cout << "Usage: ./serialize [number] [string]" << std::endl;
	return (0);
}
