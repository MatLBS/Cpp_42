/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matle-br <matle-br@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 10:52:05 by matle-br          #+#    #+#             */
/*   Updated: 2024/11/12 14:25:31 by matle-br         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

template <typename T>
void	print_type(T &type)
{
	std::cout << type;
}

int	main(void)
{
	char str[10] = "bonjour";
	iter(str, strlen(str), print_type);
}
