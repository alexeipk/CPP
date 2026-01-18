/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:23:59 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/10 20:58:54 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define MSGD "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n"
#define MSGI "[ INFO ]\nI cannot believe adding extra bacon cost more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n"
#define MSGW "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n"
#define MSGE "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n"

typedef void(Harl::*cFunc) (void);

Harl::Harl(void) {};
Harl::~Harl(void) {};


void	Harl::complain(std::string level) {
	int         i = 0;
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	cFunc       outputF[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (i = 0; i < 4 && list[i] != level; i++)
	if (i > 4) 
		return;

	switch(i) {
		case 0:
			(this->*(outputF[0]))();
			__attribute__ ((fallthrough));
		case 1:
			(this->*(outputF[1]))();
			__attribute__ ((fallthrough));
		case 2:
			(this->*(outputF[2]))();
			__attribute__ ((fallthrough));
		case 3:
			(this->*(outputF[3]))();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break ;
	}
}

void	Harl::debug(void) {
	std::cout << MSGD << std::endl;
}

void	Harl::info(void) {
	std::cout << MSGI << std::endl;
}

void	Harl::warning(void) {
	std::cout << MSGW << std::endl;
}

void	Harl::error(void) {
	std::cout << MSGE << std::endl;
}
