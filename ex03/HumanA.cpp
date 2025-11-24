/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:26 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 22:41:00 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& type): _name(name), _weapon(type) {
	std::cout << "HumanA " << _name << " has been created" << std::endl;
}

HumanA::~HumanA() {
	std::cout << "HumanA " << _name << " has been destroyed" << std::endl;
}

void	HumanA::attack() {
	std::cout << _name << " attacks with his ";
	if (!_weapon.getType().empty())
		std::cout << _weapon.getType() << std::endl;
	else
		std::cout << "bear hands, the savage!" << std::endl;
}