/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:58:27 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 15:58:55 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
	std::cout << "Cure Default Destructor has been called" << std::endl;
	return ;
}

Cure::Cure(Cure const & cure) : AMateria("cure") {
	std::cout << cure.getType() << " Copy Constructor has been called" << std::endl;
	return ;
}

Cure::~Cure(void) {
	std::cout << "Cure Destructor has been called" << std::endl;
	return ;
}

Cure&	Cure::operator=(Cure const & cure) {
	(void)cure;
	return (*this);
}

AMateria*	Cure::clone(void) const {
	AMateria*	cure = new Cure();
	return(cure);
}

void		Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName()	<< "'s wounds *" << std::endl;
	return ;
}
