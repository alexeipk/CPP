/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:13:32 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 22:41:15 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

static void	announceHorde(int N, Zombie *horde)
{
	for (int i = 0; i < N; i++)
		horde->announce();
}

int	main(void)
{
	Zombie	*horde;
	std::string random_n;
	std::string	names [] = {"Alexei", "Cristina", "Juliana", "Nickolas", "Andrei", "Felipe", "Pedro", "Valentina"};

	srand (time(NULL));
	horde = zombieHorde(3, names[rand() % 8]);
	announceHorde(3, horde);
	delete [] horde;

	horde = zombieHorde(5, names[rand() % 8]);
	announceHorde(5, horde);
	delete [] horde;
	return 0;
}
