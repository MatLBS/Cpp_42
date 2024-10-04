/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:11:44 by matle-br          #+#    #+#             */
/*   Updated: 2024/09/23 13:42:41 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cstring>

class Fixed {

	public:

	Fixed(void);
	Fixed(Fixed & n);
	Fixed & operator=(Fixed const & src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:

	int					_n;
	static const int	_bits = 8;
};

#endif
