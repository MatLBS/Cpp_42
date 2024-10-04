/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:07 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 12:02:46 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstring>
# include <cmath>

class ClapTrap {

public:

	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const & copy);
	ClapTrap &	operator=(ClapTrap const & src);
	~ClapTrap(void);

	std::string		getName(void) const;
	unsigned int	getHit_points(void) const;
	unsigned int	getEnergy_points(void) const;
	unsigned int	getAttack_points(void) const;

	void			attack(const std::string& target);
	void			takeDamage(unsigned int amount);
	void			beRepaired(unsigned int amount);



protected:

	std::string		_name;
	unsigned int	_Hit_points;
	unsigned int	_Energy_points;
	unsigned int	_Attack_points;
};

#endif
