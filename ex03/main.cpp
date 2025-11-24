/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbansacc <sbansacc@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 23:54:43 by sbansacc          #+#    #+#             */
/*   Updated: 2025/11/23 23:02:24 by sbansacc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	Weapon arme1("epee de mierda");
	Weapon arme2("Mdfk Manual");

	std::cout << "\n=== HumanA attaque avec arme1 ===\n";
	HumanA arthur("Arthur", arme1);
	arme1.setType("Excalibur");
	arthur.attack();
	
	std::cout << "\n=== HumanB sans arme ===\n";
	HumanB bob("Bob");
	bob.attack();
	
	std::cout << "\n=== Bob partage la même arme que arthur ===\n";
	bob.setWeapon(&arme1);
	bob.attack();
	arthur.attack();
	
	std::cout << "\n=== Bob change d arme ===\n";
	bob.setWeapon(&arme2);
	bob.attack();
	arthur.attack();
	
	std::cout << "\n=== Armes avec chaîne vide, NULL ===\n";
	arme1.setType("");
	arthur.attack();
	//arme1.setType(NULL);
	//arthur.attack();
	arme2.setType("");
	bob.attack();
	bob.setWeapon(NULL);
	bob.attack();
	
	std::cout << "\n=== Détruire l'arme avant l human ===\n";
	Weapon* doomed = new Weapon("Doomed Blade");
	HumanA* arnaud = new HumanA("Arnaud", *doomed);
	arnaud->attack();
	bob.setWeapon(doomed);
	bob.attack();
	std::cout << "\n>> deletion premature du weapon\n";
	delete doomed;
	arnaud->attack();
	bob.attack();
	
	return 0;
}
