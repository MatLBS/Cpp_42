/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:23:47 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 12:03:10 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cstring>
# include <cmath>

class Fixed {

public:

	Fixed(void);
	Fixed(Fixed const &copy);
	~Fixed(void);
	Fixed(const int);
	Fixed(const float);

	Fixed & operator=(Fixed const & src);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_n;
	static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream & o, Fixed const & i);

#endif
