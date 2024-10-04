/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:27:09 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:48:40 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie new_zombie = Zombie(name);
	new_zombie.announce();
	return ;
}
