/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:31:33 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 21:04:43 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "\n\n1st TEST------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat1("Bcrat1", 1);
			std::cout << "New bureaucrat 🛂 created: @" << Bcrat1.getName() << "\n" << Bcrat1 << std::endl;
			
			std::cout << Bcrat1.getName() << "> ---Decrement ⬇ grade---" << std::endl;
			Bcrat1.decGrade();
			std::cout << Bcrat1 << std::endl;

			std::cout << Bcrat1.getName() << "> ---Decrement ⬇ grade---" << std::endl;
			Bcrat1.decGrade();
			std::cout << Bcrat1 << std::endl;

			std::cout << Bcrat1.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat1.incGrade();
			std::cout << Bcrat1 << std::endl;

			std::cout << Bcrat1.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat1.incGrade();
			std::cout << Bcrat1 << std::endl;

			std::cout << Bcrat1.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat1.incGrade();
			std::cout << Bcrat1 << std::endl;
		}
		catch(std::exception & e) {
		std::cout << "✋ Grade out of range " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n2nd TEST------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat2("Bcrat2", 150);
			std::cout << "New bureaucrat 🛂 created: @" << Bcrat2.getName() << "\n" << Bcrat2 << std::endl;

			std::cout << Bcrat2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat2.incGrade();
			std::cout << Bcrat2 << std::endl;

			std::cout << Bcrat2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat2.incGrade();
			std::cout << Bcrat2 << std::endl;
			
			std::cout << Bcrat2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
			Bcrat2.decGrade();
			std::cout << Bcrat2 << std::endl;

			std::cout << Bcrat2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
			Bcrat2.decGrade();
			std::cout << Bcrat2 << std::endl;
			
			std::cout << Bcrat2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
			Bcrat2.decGrade();
			std::cout << Bcrat2 << std::endl;

			std::cout << Bcrat2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
			Bcrat2.incGrade();
			std::cout << Bcrat2 << std::endl;
		}
		catch(std::exception & e) {
		std::cout << "✋ Grade out of range " << e.what() << std::endl;
		}
	}
	{
		std::cout << "\n\n3th TEST------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat3("Bcrat3", 150);
			std::cout << "New bureaucrat 🛂 created: @" << Bcrat3.getName() << "\n" << Bcrat3 << std::endl;

			for (int i = 0; i < 150; i++)
			{
				std::cout << Bcrat3.getName() << "> +++Increment ⬆ grade+++" << std::endl;
				Bcrat3.incGrade();
				std::cout << Bcrat3 << std::endl;
			}
		}
		catch(std::exception & e) {
		std::cout << "✋ Grade out of range " << e.what() << std::endl;
		}
	}
	return (0);
}
