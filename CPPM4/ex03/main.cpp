/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 22:56:52 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 22:56:54 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int	main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	std::cout << std::endl << std::endl;

	ICharacter* me = new Character("me");

	std::cout << std::endl << std::endl;

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	std::cout << std::endl << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << std::endl << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << std::endl << std::endl;
	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << std::endl;
	return (0);
}
