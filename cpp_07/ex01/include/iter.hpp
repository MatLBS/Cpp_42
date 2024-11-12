/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:08 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 14:25:15 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void	iter(T * adress, size_t len, void (*f)(T &))
{
	for (size_t i = 0; i < len; i++)
		f(adress[i]);
}
