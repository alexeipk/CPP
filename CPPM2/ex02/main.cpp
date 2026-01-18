/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 20:42:01 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 19:08:39 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	{
		Fixed		a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		
		std::cout << b << std::endl;
		
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << "\n\n>>>>>>>>>>Additional tests<<<<<<<<<<\n" << std::endl;
		std::cout << "\nComparison operators------------------\n" << std::endl;
		Fixed aa;
		Fixed bb(3.14f);
		Fixed const cc(3);

		std::cout << aa << " < " << bb << " (" << ((aa < bb) ? "True)" : "False)") << std::endl;
		std::cout << aa << " > " << bb << " (" << ((aa > bb) ? "True)" : "False)")  << std::endl;
		std::cout << aa << " >= " << bb << " (" << ((aa >= bb) ? "True)" : "False)")  << std::endl;
		std::cout << cc << " >= " << bb << " (" << ((cc >= bb) ? "True)" : "False)")  << std::endl;
		std::cout << aa << " <= " << bb << " (" << ((aa <= bb) ? "True)" : "False)")  << std::endl;
		std::cout << cc << " <= " << bb << " (" << ((cc <= bb) ? "True)" : "False)") << std::endl;
		std::cout << aa << " == " << bb << " (" << ((aa == bb) ? "True)" : "False)") << std::endl;
		std::cout << cc << " == " << bb << " (" << ((cc == bb) ? "True)" : "False)") << std::endl;
		std::cout << aa << " != " << bb << " (" << ((aa != bb) ? "True)" : "False)") << std::endl;
		std::cout << cc << " != " << bb << " (" << ((cc != bb) ? "True)" : "False)") << std::endl;


		std::cout << "\nMath operators------------------------\n" << std::endl;
		Fixed ma(1);
		Fixed mb(3.14f);
  
		std::cout << "a" << " = " << ma << std::endl;
		std::cout << "b" << " = " << mb << std::endl;
		std::cout << ma + mb << " (a + b)" <<std::endl;
		std::cout << ma - mb << " (a - b)" <<std::endl;
		std::cout << ma * mb << " (a * b)" <<std::endl;
		std::cout << ma / mb << " (a / b)" <<std::endl;
		
		
		std::cout << "\nIncDec operators----------------------\n" << std::endl;
		Fixed ida(1);
		Fixed idb(3.14f);
  
		std::cout << "a" << " = " << ida << std::endl;
		std::cout << ++ida << " (++a)" <<std::endl;
		std::cout << --ida << " (--a)" <<std::endl;
		std::cout << ida++ << " (a++)" <<std::endl;
		std::cout << ida-- << " (a--)" <<std::endl;
		
		std::cout << "b" << " = " << idb << std::endl;
		std::cout << ++idb << " (++b)" <<std::endl;
		std::cout << --idb << " (--b)" <<std::endl;
		std::cout << idb++ << " (b++)" <<std::endl;
		std::cout << idb-- << " (b--)" <<std::endl;


		std::cout << "\nMinMax operators----------------------\n" << std::endl;
		Fixed mma(1);
		Fixed mmb(3.14f);
  
		std::cout << "max(" << mma << ", " << mmb << ") = "	<< Fixed::max(mma, mmb) << std::endl;
		std::cout << "min(" << mma << ", " << mmb << ") = "	<< Fixed::min(mma, mmb) << std::endl;
		
		return 0;
	}
}
