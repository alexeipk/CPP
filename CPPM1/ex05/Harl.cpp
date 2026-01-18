/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 21:54:24 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/02 22:18:06 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#define MSGD "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
#define MSGI "I cannot believe adding extra bacon cost more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
#define MSGW "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
#define MSGE "This is unacceptable, I want to speak to the manager now."


Harl::Harl(void) {
	this->_level[0] = "DEBUG";
	this->_level[1] = "INFO";
	this->_level[2] = "WARNING";
	this->_level[3] = "ERROR";
	this->_function[0] = &Harl::debug;
	this->_function[1] = &Harl::info;
	this->_function[2] = &Harl::warning;
	this->_function[3] = &Harl::error;
	return;
}

Harl::~Harl(void) {
	return;
}

void	Harl::complain(std::string level) {
	for (int i = 0; i < 4; i++) {
		if (level.compare(this->_level[i]) == 0)
			(this->*_function[i])();
	}
	return ;
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
