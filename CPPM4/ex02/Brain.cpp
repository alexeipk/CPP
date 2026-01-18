/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:16:15 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 21:56:53 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain 🧠 created :)" << std::endl;
	this->ideas = new std::string[100];
	this->pos = -1;
	return ;
}

Brain::Brain(Brain const & brain) {
	std::cout << "🧠 Copy 🧠" << std::endl;
	this->ideas = new std::string[100];
	*this = brain;
	return ;
}

Brain&	Brain::operator=(Brain const & brain) {
	if (this != &brain)
	{
		this->pos = brain.getPos();
		*(this->ideas) = *(brain.getIdeas());
		std::cout << "Performed Brain Deep Copy 🧠😈" << std::endl;
	}
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "🤯 xplode" << std::endl;
	delete [] this->ideas;
	return ;
}

int		Brain::getPos(void) const {
	return (this->pos);
}

std::string*	Brain::getIdeas(void) const {
	return (this->ideas);
}

void	Brain::setIdeas(std::string ideas) {
	this->pos += 1;
	if (this->pos < 100)
		this->ideas[this->pos] = ideas;
	return ;
}
