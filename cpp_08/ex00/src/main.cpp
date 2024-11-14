/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:28:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/14 17:59:39 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"

int	main(int ac, char **av)
{
	std::list<int>	lst;
	lst.push_back(10);
	lst.push_back(42);
	lst.push_back(54);
	lst.push_back(23);
	lst.push_back(8);

	if (ac == 2)
	{
		if (easyfind(lst, std::atoi(av[1])) == -1)
		{
			std::cout << "The number " << av[1] <<  " does not belong in the list." << std::endl;
			return 0;
		}
		std::cout << "The number " << av[1] << " was find at index: " << easyfind(lst, std::atoi(av[1])) << std::endl;
	}
	return 0;
}
