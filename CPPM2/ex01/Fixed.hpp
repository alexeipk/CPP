/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:42:11 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/04 20:45:50 by aprotoce         ###   ########.fr       */
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
};

std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

#endif
