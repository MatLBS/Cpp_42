/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:16:42 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:50:15 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie *horde_zombie = new Zombie[N];
	while(i < N)
	{
		horde_zombie[i].set_name(name);
		i++;
	}
	return (horde_zombie);
}
