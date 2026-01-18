/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:52:51 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 17:55:11 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default") {
	this->name = "Default";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "Default FragTrap was initialized)" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " was initialized with 💪=" << this->hitPoints 
		<< ", 🔋=" << this->energyPoints << " and 🪓=" << this->attackDamage << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & fragtrap) : ClapTrap(fragtrap.name) {
	std::cout << "Copy of FragTrap " << this->name << " has been created" << std::endl;
	*this = fragtrap;
	return ;	
}

FragTrap&	FragTrap::operator=(FragTrap const & fragtrap) {
	this->name = fragtrap.getName();
	this->hitPoints = fragtrap.getHitPoints();
	this->energyPoints = fragtrap.getEnergy();
	this->attackDamage = fragtrap.getDamage();
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << this->name << " was destroyed 😢" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void) const {
	std::cout << "🖐 " << std::endl;
	return ;
}
