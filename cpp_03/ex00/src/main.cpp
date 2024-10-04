/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:40:03 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:23:53 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int	main(void)
{
	ClapTrap Knight("Dartagnan");

	const std::string enemy = "goblins";
	Knight.attack(enemy);

	Knight.takeDamage(5);
	Knight.attack(enemy);
	Knight.beRepaired(15);
	std::cout << "_________________________________________" << std::endl << std::endl;

	ClapTrap other_Knight("Zoro");

	const std::string other_enemy = "troll";
	other_Knight.attack(other_enemy);

	other_Knight.takeDamage(15);
	other_Knight.attack(other_enemy);
	other_Knight.beRepaired(15);
	return (0);
}
