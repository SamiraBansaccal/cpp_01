/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 22:04:31 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 17:57:30 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	if (ac < 2 || !(abs(atoi(av[1]))))
	{
		std::cout << "enter an int as parameter, how many zombie do you want in your horde?" << std::endl;
		return (1);
	}
	int N = abs(atoi(av[1]));
	Zombie *horde = zombieHorde(N, "Courage");
	while (N--)
		horde[N].announce();
	delete [] horde;
	return (0);
}