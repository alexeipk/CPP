/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:13:32 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 21:58:02 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main(void)
{
	Zombie	*zombie;
	Zombie*	zombie1;
	Zombie*	zombie2;
	Zombie*	zombie3;
	std::string random_h;
	std::string	namesheap [] = {"Harry", "Helena", "Herbert", "Hazel", "Hannah", "Heidi", "Harrison"};
	std::string random_s;
	std::string	namesstack [] = {"Sophia", "Sawyer", "Scarlett", "Steven", "Sergio", "Sean", "Sabrina"};

	std::cout << "Random process\n" << std::endl;
	for (int i = 1; i < 7; i++)
	{
		random_h = namesheap[rand() % 7];
		zombie = newZombie(random_h);
		random_s = namesstack[rand() % 7];
		randomChump(random_s);
		delete zombie;
	}

	std::cout << "\nSpecific process\n" << std::endl;
	zombie1 = newZombie(namesheap[0]);
	zombie2 = newZombie(namesheap[1]);
	zombie3 = newZombie(namesheap[2]);
	randomChump(namesstack[0]);
	randomChump(namesstack[1]);
	randomChump(namesstack[2]);
	delete zombie1;
	delete zombie2;
	delete zombie3;	
	return 0;
}
