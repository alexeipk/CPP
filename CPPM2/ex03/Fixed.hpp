/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:42:11 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/04 21:15:52 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed {
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const &obj);
		~Fixed(void);
		
		Fixed(const int fixedPointValue);
		Fixed(const float floatPointValue);
		float	toFloat(void) const;
		int		toInt(void) const;

		int		getRawBits(void) const;
		
		static Fixed &min(Fixed &val1, Fixed &val2);
		static const Fixed &min(Fixed const &val1, Fixed const &val2);
		static Fixed &max(Fixed &val1, Fixed &val2);
		static const Fixed &max(Fixed const &val1, Fixed const &val2);

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

bool	operator>(Fixed const &num, Fixed const &obj);
bool	operator<(Fixed const &num, Fixed const &obj);
bool	operator>=(Fixed const &num, Fixed const &obj);
bool	operator<=(Fixed const &num, Fixed const &obj);
bool	operator==(Fixed const &num, Fixed const &obj);
bool	operator!=(Fixed const &num, Fixed const &obj);

Fixed	operator+(Fixed const &num, Fixed const &obj);
Fixed	operator-(Fixed const &num, Fixed const &obj);
Fixed	operator*(Fixed const &num, Fixed const &obj);
Fixed	operator/(Fixed const &num, Fixed const &obj);

#endif
