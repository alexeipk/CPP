/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:46:38 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 17:13:55 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include "Brain.hpp"

class	Dog : public Animal {
	public:
		Dog(void);
		Dog(Dog const & dog);
		Dog&	operator=(Dog const & dog);
		~Dog(void);

		void	makeSound(void) const;
		Brain*	getBrain(void) const;
		
	private:
		Brain*	_brain;
};

#endif
