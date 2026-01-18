/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 12:40:24 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/22 21:46:22 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "conversion.hpp"

int main(int argc, char **argv) {

	if (argc != 2) 	{
		std::cout << "You need two arguments!\nuse: ./convert <value>" << std::endl;
		return (0);
	}
	try {
		conversion value(argv[1]);
		value.display();
	}
	catch(const std::exception& e) 	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

