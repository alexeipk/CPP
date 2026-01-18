/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 18:24:24 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/03 20:01:23 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int		main(int ac, char **av) {
	Harl		Harl;
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	if (ac != 2) {
		std::cout << "Wrong number of arguments, you must use the command: \"./Harl <option>\" \nOptions: DEBUG, INFO, WARNING or ERROR.\n" << std::endl;
		return (1);
	} 
	Harl.complain(av[1]);
	return (0);
}
