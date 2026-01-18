/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:18:12 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 22:20:49 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	Animal*			animal[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

	std::cout << "\nMemory allocated:" << std::endl;	
	std::cout << "j -> " << j << " (Dog) -> " << j->getBrain() << " (Brain)" << std::endl;
	std::cout << "j -> " << i << " (Cat) -> " << i->getBrain() << " (Brain)\n" << std::endl;

	*animal[0] = *j;
	*animal[1] = *j;
	*animal[2] = *i;
	*animal[3] = *i;
	std::cout << "\nMemory allocated to deep copy:" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << " # array  |  Type  |  Animal memory  |  Brain memory" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	for (int i = 0; i < 4; i++)
		std::cout << "animal[" << i << "] |  " << animal[i]->getType() << "   | " << animal[i] << "  | " << animal[i]->getBrain() << std::endl;

	std::cout << "\nDelete vector of animals:" << std::endl;
	for (int i = 0; i < 4; i++)
		delete animal[i];

	std::cout << "\n\nDelete Dog and Cat of animals:" << std::endl;
	delete j;
	delete i;
		
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
