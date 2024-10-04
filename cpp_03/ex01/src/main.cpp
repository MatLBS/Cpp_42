/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:03:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:29:14 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"

int	main(void)
{
	ScavTrap Knight("Dartagnan");

	const std::string enemy = "goblins";
	Knight.attack(enemy);

	Knight.takeDamage(20);
	Knight.attack(enemy);
	Knight.beRepaired(15);
	Knight.guardGate();
	Knight.guardGate();

	std::cout << "_________________________________________" << std::endl << std::endl;

	ScavTrap other_Knight("Dagobert");

	const std::string other_enemy = "troll";
	other_Knight.attack(other_enemy);

	other_Knight.takeDamage(101);
	other_Knight.attack(other_enemy);
	other_Knight.beRepaired(15);
	other_Knight.guardGate();
	other_Knight.guardGate();
	return (0);
}
