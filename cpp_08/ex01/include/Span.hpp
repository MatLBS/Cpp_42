/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:41:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/18 11:59:23 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <list>
# include <numeric>
# include <cmath>
# include <cstdlib>
# include <vector>

class Span {

public:

	Span(void);
	Span(Span const & copy);
	Span &	operator=(Span const & src);
	virtual ~Span(void);

	Span(unsigned int N);

	void	addNumber(int nb);
	void	fill(int nb);
	int		shortestSpan();
	int		longestSpan();

	class TooManyNumbers : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Too many numbers in the array.");
			}
	};

	class NotEnoughNumbers : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Not enough numbers in the array.");
			}
	};

private:

	std::vector<int>	_tab;
	int					_size;
	int					_len;
};

#endif
