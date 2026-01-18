/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:42:07 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 21:30:16 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) { // Default constructor
	Fixed::fixedPointValue = 0;
}

Fixed::Fixed(const Fixed &obj) { // Copy constructor
	*this = obj;
}

Fixed	&Fixed::operator=(Fixed const &obj) { // Assignment operator
	if (this == &obj) return *this;
	this->fixedPointValue = obj.fixedPointValue;
	return (*this);
}

Fixed::~Fixed(void) { // Destructor
}

Fixed::Fixed(const int fixedPointValue) { // Constructor with int
	Fixed::fixedPointValue = fixedPointValue << Fixed::fractionalBits;
}

Fixed::Fixed(const float floatPointValue) { // Constructor with float
	Fixed::fixedPointValue = roundf(floatPointValue  * (1 << Fixed::fractionalBits));
}

float	Fixed::toFloat(void) const { // Convert to float
	return ((float)Fixed::fixedPointValue / (1 << Fixed::fractionalBits));
}

int		Fixed::toInt(void) const { // Convert to int
	return (Fixed::fixedPointValue / (1 << Fixed::fractionalBits));
}

int		Fixed::getRawBits(void) const {
	return (Fixed::fixedPointValue);
}

Fixed	&Fixed::min(Fixed &val1, Fixed &val2) {
	return(val1 < val2 ? val1 : val2);

}

Fixed	const &Fixed::min(Fixed const &val1, Fixed const &val2) {
	return(val1 < val2 ? val1 : val2);

}

Fixed	&Fixed::max(Fixed &val1, Fixed &val2) {
	return(val1 > val2 ? val1 : val2);
}

Fixed	const &Fixed::max(Fixed const &val1, Fixed const &val2) {
	return(val1 > val2 ? val1 : val2);
}

Fixed	Fixed::operator++(void) {
	Fixed	fixed;
	fixed.fixedPointValue = ++fixedPointValue;
	return (fixed);
}

Fixed	Fixed::operator--(void) {
	Fixed	fixed;
	fixed.fixedPointValue = --fixedPointValue;
	return (fixed);
}

Fixed	Fixed::operator++(int) {
	Fixed	fixed;
	fixed.fixedPointValue = fixedPointValue++;
	return (fixed);
}

Fixed	Fixed::operator--(int) {
	Fixed	fixed;
	fixed.fixedPointValue = fixedPointValue--;
	return (fixed);
}

std::ostream	&operator<<(std::ostream &os, Fixed const &obj) { // Output operator
	os << obj.toFloat();
	return (os);
}

bool	operator>(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() > obj.getRawBits());
}

bool	operator<(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() < obj.getRawBits());
}

bool	operator>=(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() >= obj.getRawBits());
}

bool	operator<=(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() <= obj.getRawBits());
}

bool	operator==(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() == obj.getRawBits());
}

bool	operator!=(Fixed const &num, Fixed const &obj) {
	return (num.getRawBits() != obj.getRawBits());
}

Fixed	operator+(Fixed const &num, Fixed const &obj) {
	return (Fixed(num.toFloat() + obj.toFloat()));
}

Fixed	operator-(Fixed const &num, Fixed const &obj) {
	return (Fixed(num.toFloat() - obj.toFloat()));
}

Fixed	operator*(Fixed const &num, Fixed const &obj) {
	return (Fixed(num.toFloat() * obj.toFloat()));
}

Fixed	operator/(Fixed const &num, Fixed const &obj) {
	return (Fixed(num.toFloat() / obj.toFloat()));
}
