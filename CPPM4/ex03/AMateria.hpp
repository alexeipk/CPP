/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:57:29 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 22:58:39 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>


class	AMateria {
	protected:
		AMateria(void);
		std::string	type;

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & materia);
		AMateria&	operator=(AMateria const & materia);
		virtual ~AMateria(void);

		std::string const & getType(void) const; //Returns the materia type

		virtual AMateria*	clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif
