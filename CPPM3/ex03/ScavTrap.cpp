/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:06:06 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 16:46:15 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default") {
	std::cout << "Default ScavTrap has evolved from ClapTrap :)" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 4;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap " << name << " has created from ClapTrap" << std::endl;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 4;
	return ;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const & scavtrap) {
	this->name = scavtrap.getName();
	this->hitPoints = scavtrap.getHitPoints();
	this->energyPoints = scavtrap.getEnergy();
	this->attackDamage = scavtrap.getDamage();
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap " << this->name << " RIP" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const & target) const {
	if (this->hitPoints > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target
			<< ", causing " << this->attackDamage << " damage points!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " don't have 💪, can't attack" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	if (this->energyPoints > 0)
	{
		this->energyPoints = ((int)this->energyPoints - 10 < 0) ? 0 : this->energyPoints - 10;
		std::cout << "ScavTrap " << this->name << " has entered in Gatekeeper mode 🚧, will lost 10 🔋" << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name << " doesn't have 🔋, can't entered in Gatekeeper mode 🚧" << std::endl;
	return ;
}
