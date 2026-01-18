/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:46:40 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 16:23:06 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void) {
	{
		try {
			std::cout << "\nCreate list------------------------------------" << std::endl;
			std::list<int>	list;

			std::cout << "Populate list----------------------------------" << std::endl;
			for (int i = 0; i < 20; i++)
				list.push_back(i + 1);
			std::cout << "Get list(2)------------------------------------" << std::endl;
			easyFind(list, 2);
			std::cout << "Get list(21)-----------------------------------" << std::endl;
			easyFind(list, 21);
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
