/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:25:50 by matle-br          #+#    #+#             */
/*   Updated: 2024/10/03 14:48:12 by matle-br         ###   ########.fr       */
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
	Fixed(const int);
	Fixed(const float);
	~Fixed(void);

	Fixed &	operator=(Fixed const & src);
	Fixed	operator+(Fixed const & src);
	Fixed	operator-(Fixed const & src);
	Fixed	operator*(Fixed const & src);
	Fixed	operator/(Fixed const & src);

	Fixed &	operator++(void);
	Fixed	operator++(int nb);
	Fixed &	operator--(void);
	Fixed	operator--(int nb);

	static Fixed & min(Fixed & scr1, Fixed & src2);
	static const Fixed & min(Fixed const & scr1, Fixed const & src2);
	static Fixed & max(Fixed & scr1, Fixed & src2);
	static const Fixed & max(Fixed const & scr1, Fixed const & src2);

	bool		operator<(Fixed const & str) const;
	bool		operator>(Fixed const & str) const;
	bool		operator>=(Fixed const & str) const;
	bool		operator<=(Fixed const & str) const;
	bool		operator==(Fixed const & str) const;
	bool		operator!=(Fixed const & str) const;

	float	toFloat(void) const;
	int		toInt(void) const;
	float	getRawBits(void) const;
	void	setRawBits(float const raw);

private:

	int				_n;
	static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream & o, Fixed const & i);

#endif
