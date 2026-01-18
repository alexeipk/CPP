/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:06:43 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 20:40:27 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int		main(void) 
{
	{
	Weapon	club = Weapon("crude spiked club");
	
	HumanA bob("Bob", club);	
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	
	{
	Weapon	club = Weapon("crude spiked club");
	
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
	}

	return 0;
}
