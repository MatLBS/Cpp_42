/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:07:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/07 17:24:25 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serialize.hpp"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		Data	nb;

		nb.nb = std::atoi(av[1]);
		Data	*new_nb = Serialize::deserialize(Serialize::serialize(&nb));
		std::cout << new_nb->nb << std::endl;
		return (0);
	}
	std::cout << "Usage: ./serialize [number]" << std::endl;
	return (0);
}
