/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:00:03 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 16:00:08 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class	Ice : public AMateria {
	public:
		Ice(void);
		Ice(Ice const & ice);
		~Ice(void);

		Ice&	operator=(Ice const & ice);

		AMateria*	clone(void) const;
		void		use(ICharacter& target);
};

#endif
