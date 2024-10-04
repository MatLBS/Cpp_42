/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:03:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:48:44 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Knight("Dartagnan");

	const std::string enemy = "goblins";
	Knight.attack(enemy);

	Knight.takeDamage(50);
	Knight.attack(enemy);
	Knight.beRepaired(15);
	Knight.whoAmI();

	std::cout << "_________________________________________" << std::endl << std::endl;

	DiamondTrap other_Knight("Le Cid");

	const std::string other_enemy = "troll";
	other_Knight.attack(other_enemy);

	other_Knight.takeDamage(150);
	other_Knight.attack(other_enemy);
	other_Knight.beRepaired(15);
	other_Knight.whoAmI();

	return (0);
}
