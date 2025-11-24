/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:57 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 22:50:19 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon {
	public:
		Weapon(std::string type);
		~Weapon();
		const std::string&	getType();
		void				setType(const std::string &type);
	private:
		std::string	_type;
};


#endif