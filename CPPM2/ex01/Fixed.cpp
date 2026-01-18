/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:42:07 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/04 21:00:43 by aprotoce         ###   ########.fr       */
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
	this->fixedPointValue = obj.fixedPointValue;
	return (*this);
}

Fixed::~Fixed(void) { // Destructor
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int fixedPointValue) { // Constructor with int
	std::cout << "Int constructor called" << std::endl;
	Fixed::fixedPointValue = fixedPointValue << Fixed::fractionalBits;
}

Fixed::Fixed(const float floatPointValue) { // Constructor with float
	std::cout << "Float constructor called" << std::endl;
	Fixed::fixedPointValue = roundf(floatPointValue  * (1 << Fixed::fractionalBits));
}

float	Fixed::toFloat(void) const { // Convert to float
	return ((float)Fixed::fixedPointValue / (1 << Fixed::fractionalBits));
}

int		Fixed::toInt(void) const { // Convert to int
	return (Fixed::fixedPointValue / (1 << Fixed::fractionalBits));
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) { // Output operator
	os << obj.toFloat();
	return (os);
}