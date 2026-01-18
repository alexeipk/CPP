/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:47:16 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 21:56:46 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "A cat 😺 appeared!" << std::endl;
	this->_brain = new Brain();
	return ;
}

Cat::Cat(Cat const & cat) : Animal("Cat") {
	std::cout << "A twin cat 😺😺 appeared!" << std::endl;
	this->_brain = new Brain();
	(void)cat;
	return ;
}

Cat&	Cat::operator=(Cat const & cat) {
	if (this != &cat)
	{
		this->type = cat.getType();
		*(this->_brain) = *(cat.getBrain());
		std::cout << "Performed Cat Deep Copy 😺😈" << std::endl;
	}
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "                            😿\nThe cat climbed on the roof 🏠." << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "MIAU MIAU MIAU" << std::endl;
	return ;
}

Brain*	Cat::getBrain(void) const {
	return (this->_brain);
}
