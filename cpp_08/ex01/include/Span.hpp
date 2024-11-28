/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 10:41:55 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/27 14:03:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>
# include <list>
# include <numeric>
# include <cmath>
# include <cstdlib>
# include <vector>
# include <algorithm>

class Span {

public:

	Span(void);
	Span(Span const & copy);
	Span &	operator=(Span const & src);
	virtual ~Span(void);

	Span(unsigned int N);

	void	addNumber(int nb);
	// void	fill(int nb, int nb2);
	void	fill(std::vector<int>vec);
	int		shortestSpan();
	int		longestSpan();
	std::vector<int>	getVector();

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
