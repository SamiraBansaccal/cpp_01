/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 01:02:14 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/24 03:03:53 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void	Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*fcts[4])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	int i = 0;
	while (i < 4 && level != levels[i])
		i++;
	if (i < 4)
	{
		switch (i)
		{
			case 0:
				std::cout << "[DEBUG]" << std::endl;
				(this->*fcts[0])();
			case 1:
				std::cout << "[INFO]" << std::endl;
				(this->*fcts[1])();
			case 2:
				std::cout << "[WARNING]" << std::endl;
				(this->*fcts[2])();
			case 3:
				std::cout << "[ERROR]" << std::endl;
				(this->*fcts[3])();
		}
	}
	else
		std::cout << "wrong usage of params boloss!" << std::endl;
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put "
				<< "enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for "
				<< "years, whereas you started working here just last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
