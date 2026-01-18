/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:56:20 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/11 19:48:12 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap() {
	FragTrap	fragtrap("temp");

	std::cout << "DiamondTrap " << name << " was initialized!" << std::endl;
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints= 100;
	this->attackDamage = fragtrap.getDamage();
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
	FragTrap	fragtrap("temp");

	std::cout << "DiamondTrap " << name << " was initialized!" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = fragtrap.getDamage();
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src.getName() + "_clap_name"), FragTrap(src.getName()), ScavTrap(src.getName()) {
	std::cout << "DiamondTrap " << this->name << " duplicated!" << std::endl;
	*this = DiamondTrap (src.getName());
	return ;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap, " << this->name << " exit!" << std::endl;
	return ;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & diamondtrap) {
	this->name = diamondtrap.FragTrap::getName();
	this->hitPoints = diamondtrap.getHitPoints();
	this->energyPoints = diamondtrap.getEnergy();
	this->attackDamage = diamondtrap.getDamage();
	return (*this);
}

void	DiamondTrap::attack(std::string const & target) const {
	this->ScavTrap::attack(target);
	return ;
}

void	DiamondTrap::whoAmI(void) const {
	std::cout << "I am DiamondTrap " << this->name << " and the ClapTrap is " << this->ClapTrap::name << std::endl;
	return ;
}

std::string	DiamondTrap::getName(void) const {
	return (this->name);
}
