/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 22:54:12 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 16:20:48 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int	main(void)
{
	std::cout << "\nTests for Animal---------------\n" << std::endl;
	{
		const Animal*	meta = new Animal();
		const Animal*	j = new Dog();
		const Animal*	i = new Cat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		j->makeSound();
		i->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
		delete i;
		
	}
	std::cout << "\n\nTests for WrongAnimal---------------" << std::endl;
	std::cout << std::endl;
	{
		const WrongAnimal*	meta = new WrongAnimal();
		const WrongAnimal*	j = new WrongCat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		j->makeSound();
		meta->makeSound();

		std::cout << std::endl;
		delete meta;
		delete j;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	return (0);
}
