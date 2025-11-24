/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:50:03 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 17:14:01 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): _name(name) {
	std::cout << this->_name << " Zombie has been created" << std::endl;
}

Zombie::Zombie(): _name("Default") {
	std::cout << this->_name << " Zombie has been created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " Zombie has been destroyed" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}
