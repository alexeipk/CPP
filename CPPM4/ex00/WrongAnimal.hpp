/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:39:55 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 13:41:30 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class	WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & animal);
		WrongAnimal&	operator=(WrongAnimal const & animal);
		virtual ~WrongAnimal(void);

		void		makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
