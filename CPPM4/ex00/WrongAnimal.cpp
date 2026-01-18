/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:42:35 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 16:31:54 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal 🐸 created!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal 🐸 " << this->_type << " type was assigned!" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const & animal) {
	std::cout << "WrongAnimal " << animal.getType() << "🐸🐸...and twins came!" << std::endl;
	*this = animal;
	return ;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const & animal) {
	if (this != &animal)
		this->_type = animal.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal " << this->_type << " went to the pet cemetery ☠️!" << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*kri* *kri*" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const {
	return (this->_type);
}
