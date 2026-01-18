/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:18:12 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 22:52:09 by aprotoce         ###   ########.fr       */
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

	std::cout << "\nMemory allocated:" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "Animal |  Animal memory  |  Brain memory" << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;	
	std::cout << "  " << j->getType() << "  | " << j << "  |  " << j->getBrain() << std::endl;
	std::cout << "  " << i->getType() << "  | " << i << "  |  " << i->getBrain() << std::endl << std::endl;

	std::cout << j->getType() << " said: " << std::endl;	
	j->makeSound();
	std::cout << i->getType() << " said: " << std::endl;	
	i->makeSound();

	std::cout << "\n\nDelete Dog and Cat:" << std::endl;
	delete j;
	delete i;
		
	std::cout << std::endl << std::endl << std::endl;


	
	int	n = 4;
	Animal	*animals[4];

	for (int i = 0; i < n / 2; i++)
		animals[i] = new Dog();
	for (int i = n / 2; i < n; i++)
		animals[i] = new Cat();

	for (int i = 0; i < n; i++)
		delete animals[i];
	
	std::cout << std::endl << "Test for deep copy---------------" << std::endl;
	Dog	*dog = new Dog();
	Dog	dogCopy = Dog(*dog);

	const std::string	*pointer;
	pointer = &(dog->getBrain()->getIdeas()[3]);
	std::cout << dog->getBrain()->getIdeas()[3] << " -> pointer address: "<<  pointer << std::endl;
	pointer = &(dogCopy.getBrain()->getIdeas()[3]);
	std::cout << dogCopy.getBrain()->getIdeas()[3] << " -> pointer address: "<< pointer<< std::endl;

	delete dog;
	std::cout << dogCopy.getBrain()->getIdeas()[3] << std::endl;

	return (0);
}
