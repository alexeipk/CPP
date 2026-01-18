/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:47:16 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 17:03:46 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "A cat 😺 appeared!" << std::endl;
	return ;
}

Cat::Cat(Cat const & cat) : Animal("Cat") {
	std::cout << "A twin cat 😺😺 appeared!" << std::endl;
	(void)cat;
	return ;
}

Cat&	Cat::operator=(Cat const & cat) {
	(void)cat;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "                            😿\nThe cat climbed on the roof 🏠." << std::endl;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "MIAU MIAU MIAU" << std::endl;
	return ;
}
