/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:51:08 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 16:33:34 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "A dog 🐶 appeared!" << std::endl;
	return ;
}

Dog::Dog(Dog const & dog) : Animal("Dog") {
	std::cout << "A twin dog 🐶🐶 appeared!" << std::endl;
	(void)dog;
	return ;
}

Dog&	Dog::operator=(Dog const & dog) {
	(void)dog;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << "The dog became a hot dog 🌭🌭🌭!" << std::endl;
	return ;
}

void	Dog::makeSound(void) const {
	std::cout << "AU AU AU" << std::endl;
	return ;
}
