/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:45:25 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/13 22:46:57 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>

class	Cat : public Animal {
	public:
		Cat(void);
		Cat(Cat const & cat);
		Cat&	operator=(Cat const & cat);
		~Cat(void);

		void	makeSound(void) const;
};

#endif
