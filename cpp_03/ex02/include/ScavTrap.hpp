/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:49:28 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 11:52:22 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & copy);
	ScavTrap &	operator=(ScavTrap const & src);
	~ScavTrap(void);

	void	guardGate(void);
	void	attack(const std::string& target);

private:

	bool	_gateKeeper;

};


#endif
