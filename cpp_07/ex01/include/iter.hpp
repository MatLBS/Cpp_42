/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:08 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/26 10:34:17 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <iomanip>
# include <fstream>
# include <cstring>
# include <cstdlib>
# include <algorithm>
# include <stdint.h>
# include <ctime>

template <typename T>
void	iter(T * adress, int len, void (*f)(T &))
{
	for (int i = 0; i < len; i++)
		f(adress[i]);
}

#endif
