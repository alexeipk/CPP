/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:01:31 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 16:01:35 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "AMateria.hpp"
# include "IMateriaSource.hpp"
# include <iostream>

class	MateriaSource : public IMateriaSource {
	protected:
		AMateria*	materia[4];
		int			idx;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & source);
		~MateriaSource(void);

		MateriaSource&	operator=(MateriaSource const & source);

		void		learnMateria(AMateria* materia);
		AMateria*	createMateria(std::string const & type);
};

#endif
