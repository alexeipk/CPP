/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:41:17 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/25 22:47:20 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	std::cout << "\ntype char----------------------------" << std::endl;
	char lettersU[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 
						'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char lettersl[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
						'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char *letters2 = NULL;
	
	iter(lettersU, 26, typeLetter);
	iter(lettersl, 26, typeLetter);
	iter(letters2, 26, typeLetter);
	

	
	std::cout << "\n\ntype int----------------------------\n" << std::endl;
	int arrayI[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int	*arrayI2 = NULL;

	iter(arrayI, 10, addOneI);
	iter(arrayI2, 10, addOneI);
	iter(arrayI, 10, doubleValueI);
	iter(arrayI2, 10, doubleValueI);
	iter(arrayI, 10, isPrime);
	iter(arrayI2, 10, isPrime);



	std::cout << "\ntype float----------------------------" << std::endl;
	float arrayF[10] = {0.0f, 0.1f, 1.0f, 1.1f, 42.00f, 42.42f, 99.00f, 99.99f, 100.0f, 100.01f};
	float *arrayF2 = NULL;
	
	iter(arrayF, 10, isRounded);
	iter(arrayF2, 10, isRounded);




	std::cout << "\n\ntype string----------------------------\n" << std::endl;
	std::string arrayS[3] = {"Hello, World!", "Alexei", "Human Coder"};
	std::string *arrayS2 = NULL;

	iter(arrayS, 3, print);
	iter(arrayS2, 3, print);
	
	return 0;
}
