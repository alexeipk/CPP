/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:53:53 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 17:55:45 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

static void	Frag_Attack_Scav(FragTrap& PAttack, ScavTrap& PDefense)
{
	std::cout << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Scav_Attack_Frag(ScavTrap& PAttack, FragTrap& PDefense)
{
	std::cout << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << std::endl;
	return ;
}

static void	Frag_Attack_Frag(FragTrap& PAttack, FragTrap& PDefense)
{
	std::cout << std::endl;
	PAttack.attack(PDefense.getName());
	PDefense.takeDamage(PAttack.getDamage());
	std::cout << std::endl;
	return ;
}

int	main(void)
{
	std::cout << "Legend:\n"
		<< "        Hit point     (💪)\n" 
		<< "        Energy point  (🔋)\n"
		<< "        Attack damage (🪓)\n" 
		<< "        Gatekeeper    (🚧)\n"
		<< "        HighFive      (🖐 )\n\n" << std::endl;

	std::cout << "\n\nFRAG TRAP>>>>>>>>>>>>> FRAG TRAP" << std::endl;
	FragTrap	Ghost("Ghost 👻");
	FragTrap	ET("ET 👾");

	Frag_Attack_Frag(Ghost, ET);
	Frag_Attack_Frag(ET, Ghost);
	ET.highFivesGuys();

	std::cout << std::endl;
	std::cout << std::endl;
	



	std::cout << "\n\nSCAV TRAP>>>>>>>>>>>>> FRAG TRAP" << std::endl;
	FragTrap	Goblin("Goblin 👺");
	ScavTrap	Cyborg("Cyborg 🤖");

	Frag_Attack_Scav(Goblin, Cyborg);
	Frag_Attack_Scav(Goblin, Cyborg);
	Cyborg.beRepaired(30);
	Scav_Attack_Frag(Cyborg, Goblin);
	Scav_Attack_Frag(Cyborg, Goblin);
	Scav_Attack_Frag(Cyborg, Goblin);
	Scav_Attack_Frag(Cyborg, Goblin);
	Scav_Attack_Frag(Cyborg, Goblin);
	Scav_Attack_Frag(Cyborg, Goblin);
	Goblin.highFivesGuys();
	Goblin.highFivesGuys();
	Goblin.highFivesGuys();
	Goblin.highFivesGuys();
	std::cout << std::endl;

	return (0);
}
