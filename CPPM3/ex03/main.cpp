/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:54:42 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/11 19:53:41 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void	diamond_attack_diamond(DiamondTrap& PAttack, DiamondTrap& PDefense)
{
	std::cout << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << std::endl;
}

int	main(void)
{
	std::cout << "Legend:\n"
	<< "        Hit point     (💪)\n" 
	<< "        Energy point  (🔋)\n"
	<< "        Attack damage (🪓)\n" 
	<< "        Gatekeeper    (🚧)\n"
	<< "        HighFive      (🖐 )\n\n" << std::endl;
		
	DiamondTrap	ET("ET 👾");
	DiamondTrap Cyborg("Cyborg 🤖");
	
	std::cout << "\n\nDIAMOND TRAP>>>>>>>>>>>>> DIAMOND TRAP\n" << std::endl;

	diamond_attack_diamond(ET, Cyborg);
	diamond_attack_diamond(ET, Cyborg);
	diamond_attack_diamond(ET, Cyborg);
	diamond_attack_diamond(Cyborg, ET);
	diamond_attack_diamond(ET, Cyborg);
	diamond_attack_diamond(ET, Cyborg);
	Cyborg.beRepaired(5);
	diamond_attack_diamond(ET, Cyborg);
	ET.whoAmI();
	Cyborg.whoAmI();

	std::cout << "\n\nExits, deaths and destruction!!!\n" << std::endl;

	return (0);
}
