/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:52 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 22:55:51 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type) {
	std::cout << _type << " weapon has been created" << std::endl;
}

Weapon::~Weapon() {
	std::cout << _type << " weapon has been destroyed" << std::endl;
}

const std::string&	Weapon::getType() {
	return (_type);
}

void	Weapon::setType(const std::string &type) {
	_type = type;
}
