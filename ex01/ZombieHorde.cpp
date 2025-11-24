/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:54:27 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 17:54:15 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie*	zombieHorde(int N, std::string name) {
	int i = 0;
	std::stringstream ss;
	Zombie *horde = new Zombie[N];
	while (i < N)
	{
		ss << i + 1;
		horde[i++].setName(name + ss.str());
		ss.str("");
	}
		
	return (horde);
}
