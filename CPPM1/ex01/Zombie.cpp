/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:18:29 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 22:16:50 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
	return;
}

Zombie::Zombie(std::string name) : _name( name ){
	return;
}

Zombie::~Zombie(void){
	std::string random_goodbye;
	std::string	goodbye [] = {"Zombies eat brains, you are safe.", "Zombies climb in and eat you.", 
	"Dear girls, We like you for your brains, not your body. Sincerely, Zombies.", 
	"If I come back as a zombie I'm eating you first!"};

	random_goodbye = goodbye[rand() % 4];
	std::cout << this->_name << ": (msg exit) " << random_goodbye << std::endl;
	return ;
}
	
void	Zombie::announce(void){
	std::cout << this->_name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name){
	this->_name = name;
}
