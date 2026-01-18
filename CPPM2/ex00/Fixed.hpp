/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:33:46 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/04 20:43:29 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed {
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
		
	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed &operator=(Fixed const &obj);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
