/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 00:00:00 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/24 03:06:52 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl harl;
	
	std::cout << "--- Test invalide ---" << std::endl;
	harl.complain("INVALID");
	std::cout << std::endl;
	
	std::cout << "--- Test chaîne vide ---" << std::endl;
	harl.complain("");
	std::cout << std::endl;
	
	std::cout << "--- Test sensitivity ---" << std::endl;
	harl.complain("debug");
	harl.complain("Info");
	std::cout << std::endl;
	
	std::cout << "=== Série de plaintes ===" << std::endl;
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("INFO");
	
	return 0;
}