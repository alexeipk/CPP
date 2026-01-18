/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:38:18 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/25 22:47:09 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>
#include <iomanip>

template <typename T>
void	iter(T *array, size_t length, void (*func)(T const &)) {
	if (array == NULL)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}



template<typename T>
void typeLetter(T const &n){
	std::string vowels = "aAeEiIoOuUyY";

	if (vowels.find(n) != std::string::npos)
		std::cout << n << " is a vowel" << std::endl;
	else
		std::cout << n << " is a consonant" << std::endl;
}

template<typename T>
void addOneI(T const &n) {
	int		integer = n;
	integer = n + 1;
	std::cout << n << " + 1 = " << integer << std::endl;
}

template<typename T>
void doubleValueI(T &n) {
	int		integer = n;
	integer = n * 2;
	std::cout << n << " * 2 = " << integer << std::endl;
}

template<typename T>
void	isPrime(T const &n) {
	bool isPrime = true;

	if (n == 0 || n == 1)
		isPrime = false;
	else
	{
		for (int i = 2; i <= n / 2; i++) {
			if (n % i == 0)	{
				isPrime = false;
                break;
			}
		}
	}
	std::cout << n << " is " << (isPrime ? "" : "not ") << "a prime number" << std::endl;
}

template<typename T>
void	isRounded(T const &n) {
	int		integer = n;
	float	floatRounded = integer;	

	std::cout << std::fixed << std::setprecision(2);
	std::cout << n << (n == floatRounded ? " is" : " is not") << " rounded" << std::endl;
}

template<typename T>
void print(T const &n) {
	std::cout << n << std::endl;
}

#endif