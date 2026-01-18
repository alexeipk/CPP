/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:08:58 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/13 22:47:00 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class	Animal {
	public:
		Animal(void);
		Animal(std::string type);
		Animal(Animal const & animal);
		Animal&	operator=(Animal const & animal);
		virtual	~Animal(void);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:
		std::string	type;
};

#endif
