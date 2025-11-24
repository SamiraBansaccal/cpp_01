/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:30 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/08 15:56:57 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA();
		void	attack();
	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif