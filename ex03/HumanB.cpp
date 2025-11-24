/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:34 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 22:35:17 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {
	std::cout << "HumanB " << _name << " has been created" << std::endl;
}

HumanB::~HumanB() {
	std::cout << "HumanB " << _name << " has been destroyed" << std::endl;
}

void	HumanB::attack() {
	std::cout << _name << " attacks with his ";
	if (_weapon && !_weapon->getType().empty())
		std::cout << _weapon->getType() << std::endl;
	else
		std::cout << "bear hands, the savage!" << std::endl;
}

void	HumanB::setWeapon(Weapon* weapon) {
	this->_weapon  = weapon;
}
