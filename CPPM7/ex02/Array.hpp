/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 20:45:06 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/27 21:42:17 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <cstring>
# include <cstdlib>

# define MAX_VAL 20

template<typename T>
class Array {
	private:
		T				*arr;
		unsigned int	num;
	protected:
	public:
		Array(void) {arr = new int();}
		Array(unsigned int n): num(n) {arr = new int[num];}
		Array(Array const &copy) {*this = copy;}
		Array	&operator=(Array const &copy) {
			num = copy.num;
			arr = new int[num];
			return (*this);
		}
		T	&operator[](unsigned int index) {
			if (index >= num)
				throw OutRangeException();
			return (arr[index]);
		}
		~Array(void) {delete[] arr;}
		unsigned int	size(void) { return (this->num); }

		class OutRangeException: public std::exception {
			public:
				virtual const char* what() const throw() {return ("Exception - Out of Range!");}
		};
};

#endif