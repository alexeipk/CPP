/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 15:59:02 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 15:59:13 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Cure : public AMateria {
	public:
		Cure(void);
		Cure(Cure const & cure);
		Cure&	operator=(Cure const & cure);
		~Cure(void);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
