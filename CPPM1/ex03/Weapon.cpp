/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 19:54:08 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 19:54:19 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type){
	return;
}

Weapon::~Weapon(void){
	return;
}

void	Weapon::setType(std::string type){
	this->_type = type;
}

const std::string	&Weapon::getType(void) const{
	return this->_type; 
}
