/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:00:46 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 15:57:21 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : type("materia") {
	std::cout << "AMAteria created" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type) : type(type) {	
	std::cout << "AMateria " << type << " type was assigned!" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const & materia) {
	std::cout << "AMateria " << materia.getType() << " make a copy" << std::endl;
	*this = materia;
	return ;
}

AMateria&	AMateria::operator=(AMateria const & materia) {
	this->type = materia.getType();
	return (*this);
}

AMateria::~AMateria(void) {
	std::cout << "AMateria was destroyed" << this->type << std::endl;
	return ;
}

std::string const &	AMateria::getType(void) const {
	return (this->type);
}

void	AMateria::use(ICharacter& target) {/**Action dependent of AMateria class **/
	std::cout << "Using AMateria with " << target.getName() << std::endl;
	return ;
}
