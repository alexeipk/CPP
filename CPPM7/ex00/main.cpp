/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:00:00 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 17:43:17 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "templates.hpp"

int main( void ) {
	{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
	std::cout << "\n\nMore tests---------------------------" << std::endl;
	std::cout << "-------------------------------------\n" << std::endl;
	char c_a = 'a'; char c_b = 'b';
	int i_a = 2; int i_b = 3;
	float f_a = 1.2; float f_bd = 3.4;
	std::string s_a = "Hello"; std::string s_b = "World";
	bool b_t = true; bool b_f = false;

	std::cout << "type char----------------------------\n" << std::endl;
	std::cout << "c_a = " << c_a << ", c_b = " << c_b << std::endl;
	std::cout << "swap" << std::endl;
	::swap( c_a, c_b );
	std::cout << "c_a = " << c_a << ", c_b = " << c_b << std::endl;
	std::cout << "min( a, b ) = " << ::min( c_a, c_b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( c_a, c_b ) << std::endl;

	std::cout << "\n\ntype int----------------------------\n" << std::endl;
	std::cout << "i_a = " << i_a << ", i_b = " << i_b << std::endl;
	std::cout << "swap" << std::endl;
	::swap( i_a, i_b );
	std::cout << "i_a = " << i_a << ", i_b = " << i_b << std::endl;
	std::cout << "min( a, b ) = " << ::min( i_a, i_b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( i_a, i_b ) << std::endl;
	
	std::cout << "\n\ntype float----------------------------\n" << std::endl;
	std::cout << "f_a = " << f_a << ", f_bd = " << f_bd << std::endl;
	std::cout << "swap" << std::endl;
	::swap( f_a, f_bd );
	std::cout << "f_a = " << f_a << ", f_bd = " << f_bd << std::endl;
	std::cout << "min( a, b ) = " << ::min( f_a, f_bd ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( f_a, f_bd ) << std::endl;
	
	std::cout << "\n\ntype string----------------------------\n" << std::endl;
	std::cout << "s_a = " << s_a << ", s_b = " << s_b << std::endl;
	std::cout << "swap" << std::endl;
	::swap( s_a, s_b );
	std::cout << "s_a = " << s_a << ", s_b = " << s_b << std::endl;
	std::cout << "min( a, b ) = " << ::min( s_a, s_b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( s_a, s_b ) << std::endl;
	
	std::cout << "\n\ntype bool----------------------------\n" << std::endl;
	std::cout << "b_t = " << b_t << ", b_f = " << b_f << std::endl;
	std::cout << "swap" << std::endl;
	::swap( b_t, b_f );
	std::cout << "b_t = " << b_t << ", b_f = " << b_f << std::endl;
	std::cout << "min( a, b ) = " << ::min( b_t, b_f ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( b_t, b_f ) << std::endl;
	}
	return 0;
}