/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:03:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/01 16:52:30 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"
#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int	main(void)
{
	FragTrap Knight("Zoro");

	const std::string enemy = "goblins";
	Knight.attack(enemy);

	Knight.takeDamage(50);
	Knight.attack(enemy);
	Knight.beRepaired(15);
	Knight.highFivesGuys();
	Knight.highFivesGuys();
	Knight.highFivesGuys();

	std::cout << "__________________________________________________________________________" << std::endl << std::endl;

	FragTrap other_Knight("Goldorak");

	const std::string other_enemy = "troll";
	other_Knight.attack(other_enemy);

	other_Knight.takeDamage(150);
	other_Knight.attack(other_enemy);
	other_Knight.beRepaired(15);
	other_Knight.highFivesGuys();

	return (0);
}
