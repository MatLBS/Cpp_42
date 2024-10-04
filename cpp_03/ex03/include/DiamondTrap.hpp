/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:33:14 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 17:32:04 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap, public FragTrap {

public:

	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & copy);
	DiamondTrap &	operator=(DiamondTrap const & src);
	~DiamondTrap(void);

	std::string	getName_Diamond(void) const;
	void	attack(const std::string & target);
	void	whoAmI();

private:

	std::string	_name;

};

#endif
