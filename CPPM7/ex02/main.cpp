/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:45:13 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 10:59:46 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int		main(void) {
	{
		std::cout << "\n1st test - Creating empty array------------------------------------" << std::endl;
		int			*a = new int();
		std::cout << "Memory Address: " << a << std::endl;
		delete a;
		std::cout << "End of test--------------------------------------------------------\n" << std::endl;
		
		
		std::cout << "\n2nd test - Creating array with size--------------------------------" << std::endl;
		Array<int>	arr(10);
		std::cout << "Memory Address: " << &arr << std::endl;
		std::cout << "Elements: " << std::endl;
		try {
			for (unsigned int i = 0; i < arr.size(); i++) {
				arr[i] = i * 2;
				std::cout << "Element" << i << ": " << arr[i] << std::endl;
			}
		} catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << "End of test--------------------------------------------------------\n" << std::endl;


		std::cout << "\n3th test - Creating 2 random array with max size-------------------" << std::endl;
		Array<int> array1(MAX_VAL);
		int* array2 = new int[MAX_VAL];
		srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++) {
			const int value = std::rand();
			array1[i] = value;
			array2[i] = value;
		}
		{
			Array<int> tmp = array1;
			Array<int> test(tmp);
		}

		std::cout << "Checks if the array elements have the same value-------------------" << std::endl;
		for (int i = 0; i < MAX_VAL; i++) {
			if (array1[i] != array2[i]) {
				std::cerr << "The array elements do not have the same value." ;
				return 1;
			}
			else
				std::cout << "Ok " ;
		}
		std::cout << std::endl;

		
		std::cout << "Get values of array:" << std::endl;
		for (int i = 0; i < MAX_VAL; i++) {
			array1[i] = std::rand();
			std::cout << "| " << array1[i];
		}
		
		std::cout << "\nGet value of last element: " << "element[" << MAX_VAL << "]: " << array1[MAX_VAL - 1] << std::endl;
		
		std::cout << "Change last value of array to zero" << std::endl;
		try {
			array1[MAX_VAL - 1] = 0;
		} catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
		std::cout << "Get value of last element: " << "element[" << MAX_VAL << "]: " << array1[MAX_VAL - 1] << std::endl;

		std::cout << "Change value with negative index" << std::endl;
		try {
			array1[-1] = 0;
		} catch(const std::exception& e) {
			std::cerr << e.what() << '\n';
		}

		delete[] array2;
		std::cout << "End of test--------------------------------------------------------\n" << std::endl;
	}
	return (0);
}
