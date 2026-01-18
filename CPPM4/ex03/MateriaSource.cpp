/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:00:35 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/15 16:00:59 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : idx(0) {
	std::cout << "Default MateriaSource Constructor has been called"
		<< std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & source) {
	std::cout << "MateriaSource Copy Constructor has been called"
		<< std::endl;
	*this = source;
	return ;
}

MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource Destructor has been called" << std::endl;
	while (this->idx > 0)
	{
		delete this->materia[idx - 1];
		this->materia[idx - 1] = NULL;
		this->idx -= 1;
	}
	return ;
}

MateriaSource&	MateriaSource::operator=(MateriaSource const & source) {
	while (this->idx > 0)
	{
		delete this->materia[idx - 1];
		this->materia[idx - 1] = NULL;
		this->idx -= 1;
	}
	while (this->idx < source.idx)
	{
		this->materia[this->idx] = source.materia[this->idx]->clone();
		this->idx += 1;
	}
	return (*this);
}

void		MateriaSource::learnMateria(AMateria* materia) {
	if (this->idx < 4)
	{
		this->materia[this->idx] = materia;
		this->idx += 1;
	}
	else
		std::cout << "MateriaSource Bag is full :(" << std::endl;
	return ;
}


AMateria*	MateriaSource::createMateria(std::string const & type) {
	AMateria*	materia;
	int			count;
	int			find;

	count = 0;
	find = -1;
	while (count < this->idx)
	{
		if (this->materia[count]->getType() == type)
			find = count;
		count++;
	}
	if (find == -1)
		return (0);
	materia = this->materia[find]->clone();
	return (materia);
}
