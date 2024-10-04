/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 18:49:09 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/26 09:21:21 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	std::cout << "Creating First Zombie" << std::endl;
	Zombie first = Zombie("first_zombie");
	first.announce();

	std::cout << "Creating Second Zombie" << std::endl;
	Zombie *second = newZombie("second_zombie");
	second->announce();
	delete second;

	std::cout << "Creating Third Zombie" << std::endl;
	randomChump("third_zombie");
	return (0);
}
