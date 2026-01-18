/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:13:58 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 12:40:19 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

static void	attack(ClapTrap& PAttack, ClapTrap& PDefense)
{
	std::cout << "\nAttack begins----------" << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << "Attack finished--------\n" << std::endl;
}

int	main(void)
{
	std::cout << "Legend:\n"
			  << "        Hit point     (💪)\n" 
			  << "        Energy point  (🔋)\n"
			  << "        Attack damage (🪓)\n" <<std::endl;
	
	ClapTrap	ET("ET 👾");
	ClapTrap	Alien("Alien 👽");
	ClapTrap	Cyborg("Cyborg 🤖");
	ClapTrap	Ghost("Ghost 👻");
	ClapTrap	Ogre("Ogre 👹");
	ClapTrap	Goblin("Goblin 👺");
	
	std::cout << std::endl;

	attack(ET, Alien);
	attack(Alien, ET);
	ET.beRepaired(3);
	ET.beRepaired(3);
	attack(Cyborg, ET);

	std::cout << std::endl;
	return (0);
}
