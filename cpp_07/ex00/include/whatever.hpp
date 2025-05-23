/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:07:05 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 18:08:40 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <algorithm>
# include <stdint.h>
# include <ctime>
# include <typeinfo>

template <typename T>
T	max(T const & x, T const & y)
{
	return(x>y ? x : y);
}

template <typename T>
T	min(T const & x, T const & y)
{
	return(x<y ? x : y);
}

template <typename T>
void	swap(T & x, T & y)
{
	T temp = x;
	x = y;
	y = temp;
}

#endif
