/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:03:53 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:52:28 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {

	public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon& weapon);

	private:

	Weapon *_weapon;
	std::string _name;
};

#endif
