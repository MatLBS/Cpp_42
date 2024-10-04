/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:14:20 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/27 12:25:25 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	FragTrap &	operator=(FragTrap const & src);
	~FragTrap(void);

	void	highFivesGuys(void);

private:

	bool		_High_Fives;
	static int	nb_High_Fives;

};

#endif
