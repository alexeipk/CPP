/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:51:08 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 21:57:24 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "A dog 🐶 appeared!" << std::endl;
	this->_brain = new Brain();
	return ;
}

Dog::Dog(Dog const & dog) : Animal("Dog") {
	std::cout << "A twin dog 🐶🐶 appeared!" << std::endl;
	this->_brain = new Brain();
	(void)dog;
	return ;
}

Dog&	Dog::operator=(Dog const & dog) {
	if (this != &dog)
	{
		this->type = dog.getType();
		*(this->_brain) = *(dog.getBrain());
		std::cout << "Performed Dog Deep Copy 🐶😈" << std::endl;
	}
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "The dog became a hot dog 🌭🌭🌭!" << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound(void) const {
	std::cout << "AU AU AU" << std::endl;
	return ;
}

Brain*	Dog::getBrain(void) const{
	return (this->_brain);
}
