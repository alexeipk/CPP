/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 13:48:29 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 16:38:08 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat 🦗 created!" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const & cat) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat 🦗🦗 twins came!" << std::endl;
	(void)cat;
	return ;
}

WrongCat&	WrongCat::operator=(WrongCat const & cat) {
	(void)cat;
	return (*this);
}

WrongCat::~WrongCat(void) {
	std::cout << "This cat does not have 7 lives 💥 !" << std::endl;
	return ;
}
