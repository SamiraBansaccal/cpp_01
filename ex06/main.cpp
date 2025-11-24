/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 01:01:58 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/24 03:01:23 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char** av)
{
	if (ac < 2)
	{
		std::cout << "wrong usage of params boloss!" << std::endl;
		return (1);
	}
	Harl	harl;
	harl.complain(av[1]);
	return (0);
}
