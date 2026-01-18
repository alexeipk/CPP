/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:03:27 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 20:06:11 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :	_name(name), _weapon(NULL){
	return;
}

HumanB::~HumanB(void){
	return;
}

void	HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void	HumanB::attack(void){
	if (this->_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " has no weapons to attack" << std::endl;
}
