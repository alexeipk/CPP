/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 23:04:45 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 23:05:05 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class	Character : public ICharacter {
	protected:
		Character(void);

		std::string	name;
		AMateria*	materia[4];
		int			idx;

	public:
		Character(std::string const & name);
		Character(Character const & character);
		Character&	operator=(Character const & character);
		~Character(void);

		std::string const &	getName(void) const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
};

#endif
