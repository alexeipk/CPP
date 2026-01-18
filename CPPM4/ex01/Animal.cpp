/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:35:21 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 17:19:27 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Animal") { // Default Constructor
	std::cout << "Animal created!" << std::endl;
	return ;
}

Animal::Animal(std::string type) : type(type) { // Constructor with Animal Type
	std::cout << "Animal " << this->type << " type was assigned!" << std::endl;
	return ;
}

Animal::Animal(Animal const & animal) { // Copy Constructor
	std::cout << "Animal " << animal.getType() << "...and twins came!" << std::endl;
	*this = animal;
	return ;
}

Animal&	Animal::operator=(Animal const & animal) { // Copy Assignment Operator Overload
	if (this != &animal)
	{
		this->type = animal.getType();
		if ((animal.getType() == "Dog" || animal.getType() == "Cat")
				&& (this->type == "Dog" || this->type == "Cat"))
			*(this->getBrain()) = *(animal.getBrain());
	}
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal " << this->type << " went to the pet cemetery 💀!" << std::endl;
	return ;
}

void	Animal::makeSound(void) const {
	std::cout << "Animal " << this->type << " was not assigned to emit sounds!" << std::endl;
	return ;
}

std::string	Animal::getType(void) const {
	return (this->type);
}
