/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:14:31 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 17:56:14 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name) {
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "ClapTrap " << name << " was initialized with 💪=" << this->hitPoints 
		<< ", 🔋=" << this->energyPoints << " and 🪓=" << this->attackDamage << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & claptrap) {
	std::cout << "Copy of ClapTrap " << this->name << " has been created" << std::endl;
	*this = claptrap;
	return ;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const & claptrap) {
	this->name = claptrap.getName();
	this->hitPoints = claptrap.getHitPoints();
	this->energyPoints = claptrap.getEnergy();
	this->attackDamage = claptrap.getDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << this->name << " was destroyed 😢" << std::endl;
	return ;
}

void	ClapTrap::attack(std::string const & target) const {
	if (this->hitPoints > 0) 
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << "🪓" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " don't have 💪 to attack " << target << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->hitPoints > 0)
	{
		this->hitPoints =  ((int)this->hitPoints - (int)amount < 0) ? 0 : this->hitPoints - amount;
		std::cout << "ClapTrap " << this->name << " has been damaged. Now it has " << this->hitPoints << "💪" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " is die ☠ " << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " has been repaired 🚑. Now it has " << this->hitPoints << "💪" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const {
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints(void) const {
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergy(void) const {
	return (this->energyPoints);
}

unsigned int	ClapTrap::getDamage(void) const {
	return (this->attackDamage);
}
