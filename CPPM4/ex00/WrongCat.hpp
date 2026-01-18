/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:41:16 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 13:41:42 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>

class	WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const & cat);
		WrongCat&	operator=(WrongCat const & cat);
		~WrongCat(void);
};

#endif
