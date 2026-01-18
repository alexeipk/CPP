/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:31:23 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/04 20:35:13 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) { // Default constructor
	std::cout << "Default constructor called" << std::endl;
	Fixed::fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj) { // Copy constructor
	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Fixed	&Fixed::operator=(Fixed const &obj) { // Assignment operator
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &obj) return *this;
	this->fixedPointValue = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) { // Destructor
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void) const { // Getter
	std::cout << "getRawBits member function called" << std::endl;
	return (Fixed::fixedPointValue);
}

void	Fixed::setRawBits(int const raw) { // Setter
	std::cout << "setRawBits member function called" << std::endl;
	Fixed::fixedPointValue = raw;
}
