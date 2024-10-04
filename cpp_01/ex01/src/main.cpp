/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:14:34 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 09:42:18 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int	main(void)
{
	int	i;
	int	nb;
	Zombie *horde_zombie;
	Zombie *horde_zombie1;

	i = 0;
	nb = 10;
	horde_zombie = zombieHorde(nb, "Bob");
	while (i < nb)
	{
		horde_zombie[i].announce();
		i++;
	}
	delete[] horde_zombie;

	std::cout << "_______________________" << std::endl << std::endl;
	nb = 5;
	i = -1;
	horde_zombie1 = zombieHorde(nb, "Marc");
	while (++i < nb)
		horde_zombie1[i].announce();
	delete[] horde_zombie1;
	return (0);
}
