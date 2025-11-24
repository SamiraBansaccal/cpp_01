/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:25:15 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 17:02:04 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	//This function creates a zombie on heap, names it, and returns it so you can use it outside of the function scope->
	Zombie *courage = newZombie("Courage");
	//This function creates a zombie on stack, names it, and makes it announce itself->
	randomChump("El Torche");
	courage->announce();
	delete courage;
	return (0);
}