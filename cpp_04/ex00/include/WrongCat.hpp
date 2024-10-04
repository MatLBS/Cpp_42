/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 14:41:27 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/30 14:45:02 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <cstring>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:

		WrongCat(void);
		WrongCat(WrongCat const & copy);
		WrongCat &	operator=(WrongCat const & src);
		~WrongCat(void);

		virtual void	makeSound(void) const;

	private:

};

#endif
