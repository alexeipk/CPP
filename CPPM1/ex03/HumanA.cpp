/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:01:41 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 20:03:52 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
	return;
}

HumanA::~HumanA(void){
	return;
}

void	HumanA::attack(void){
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
