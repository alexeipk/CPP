/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 20:43:09 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 21:17:32 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	Point const	A(0,0);
	Point const	B(2.5,5);
	Point const	C(5,0);
	Point const	D(1,1);
	Point const	E(-1,0);
	Point const	F(2,2);
	Point const	G(0,0);
	Point const	H(2.5,4);

	std::cout << "Triangule's vertices: " << "A(" << A.getX() << "," << A.getY() << ") | " << "B(" << B.getX() << "," << B.getY() << ") | " <<  "C(" << C.getX() << "," << C.getY() << ")" << std::endl;

	std::cout << D << " coordinates " << (bsp(A, B, C, D) ? "in" : "out") << "side the triangle" << std::endl;
	std::cout << E << " coordinates " << (bsp(A, B, C, E) ? "in" : "out") << "side the triangle" << std::endl;
	std::cout << F << " coordinates " << (bsp(A, B, C, F) ? "in" : "out") << "side the triangle" << std::endl;
	std::cout << G << " coordinates " << (bsp(A, B, C, G) ? "in" : "out") << "side the triangle" << std::endl;
	std::cout << H << " coordinates " << (bsp(A, B, C, H) ? "in" : "out") << "side the triangle" << std::endl;
	
	return (0);
}
