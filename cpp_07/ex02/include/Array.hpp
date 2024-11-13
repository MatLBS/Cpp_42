/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:42:30 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/13 15:00:51 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <algorithm>
# include <stdint.h>
# include <ctime>
# include <typeinfo>

template <typename T = int>
class Array {

public:

	Array(void);
	Array(unsigned int n);
	Array(Array const & copy);
	Array &	operator=(Array const & src);
	~Array(void);

	unsigned int	size(void) const;
	T &			operator[](int index);


	class IndexOutOfBounds : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Index is out of bounds.");
			}
	};


private:
	T				*_array;
	unsigned int	_len;


};

# include "../src/Array.tpp"

#endif
