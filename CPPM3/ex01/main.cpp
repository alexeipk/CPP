/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:17:33 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 16:46:02 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

static void	Scav_Attack_Scav(ScavTrap& PAttack, ScavTrap& PDefense) {
	std::cout << "\nAttack ScavTrap to ScavTrap begins----------" << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << "Attack finished-------------------------------\n" << std::endl;
	return ;
}

static void	Scav_Attack_Clap(ScavTrap& PAttack, ClapTrap& PDefense){
	std::cout << "\nAttack ScavTrap to ClapTrap begins----------" << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << "Attack finished-------------------------------\n" << std::endl;
}

static void	Clap_Attack_Scav(ClapTrap& PAttack, ScavTrap& PDefense){
	std::cout << "\nAttack ClapTrap to ScavTrap begins----------" << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << "Attack finished-------------------------------\n" << std::endl;
}

int	main(void){
	
	std::cout << "Legend:\n"
			<< "        Hit point     (💪)\n" 
			<< "        Energy point  (🔋)\n"
			<< "        Attack damage (🪓)\n" 
			<< "        Gatekeeper    (🚧)" << std::endl;
	
	
	std::cout << "\n\nSCAV TRAP>>>>>>>>>>>>> SCAV TRAP" << std::endl;
	ScavTrap	ET("ET 👾");
	ScavTrap	Alien("Alien 👽");
	ScavTrap	Cyborg("Cyborg 🤖");
	ScavTrap	Ghost("Ghost 👻");
	ScavTrap	Ogre("Ogre 👹");
	ScavTrap	Goblin("Goblin 👺");
	
	Scav_Attack_Scav(ET, Ghost);
	Ghost.beRepaired(5);
	Scav_Attack_Scav(Ghost, ET);
	Scav_Attack_Scav(Ghost, ET);
	ET.guardGate();
	ET.beRepaired(2);
	Scav_Attack_Scav(Ghost, ET);
		
	std::cout << "\n\n\n" << std::endl;


	std::cout << "SCAV TRAP >>>>>>>>>>>>>CLAP TRAP" << std::endl;
	Clap_Attack_Scav(Alien, Ogre);
	Scav_Attack_Clap(Ogre, Alien);
	Scav_Attack_Clap(Ogre, Alien);
	Clap_Attack_Scav(Alien, Ogre);
	Ogre.guardGate();
	Ogre.guardGate();
	Ogre.guardGate();
	std::cout << std::endl;
	Alien.beRepaired(5);
	
	std::cout << std::endl;
	return (0);
}
