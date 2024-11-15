/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 17:28:18 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/15 10:37:31 by matle-br         ###   ########.fr       */
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

	if (ac == 3)
	{
		std::list<int>::iterator it = easyfind(lst, std::atoi(av[1]));
		if (it != lst.end())
		{
			int index = std::distance(lst.begin(), it);
			std::cout << "The number " << av[1] << " was find at index: " << index << std::endl;
		}
		else
			std::cout << "The number " << av[1] <<  " does not belong in the list." << std::endl;
	}
	std::vector<int>	vec;
	vec.push_back(1);
	vec.push_back(5);
	vec.push_back(141);
	vec.push_back(87);
	vec.push_back(14);
	vec.push_back(24);
	if (ac == 3)
	{
		std::vector<int>::iterator it2 = easyfind(vec, std::atoi(av[2]));
		if (it2 != vec.end())
		{
			int index2 = std::distance(vec.begin(), it2);
			std::cout << "The number " << av[2] << " was find at index: " << index2 << std::endl;
		}
		else
			std::cout << "The number " << av[2] <<  " does not belong in the list." << std::endl;
	}
	return 0;
}
