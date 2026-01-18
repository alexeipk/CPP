/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:59:24 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 15:59:58 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
	std::cout << "Ice Default Constructor has been called" << std::endl;
	return ;
}

Ice::Ice(Ice const & ice) : AMateria("ice") {
	std::cout << ice.getType() << " Copy Constructor has been called" << std::endl;
	return ;
}

Ice::~Ice(void) {
	std::cout << "Ice Destructor has been called" << std::endl;
	return ;
}

Ice&	Ice::operator=(Ice const & ice) {
	(void)ice;
	return (*this);
}

AMateria*	Ice::clone(void) const {
	AMateria*	ice = new Ice();
	return (ice);
}

void		Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
