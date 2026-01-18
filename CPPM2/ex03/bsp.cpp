/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:44:05 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 21:28:36 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	get_area(Point const a, Point const b, Point const c)
{
	Fixed	pos;
	Fixed	neg;
	Fixed	area;

	pos = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY();
	neg = a.getY() * b.getX() + b.getY() * c.getX() + c.getY() * a.getX();
	area = (pos - neg) / 2;
	
	if (area < 0)
		area = area * -1;
	return (area);

}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	total_area;
	Fixed	pab;
	Fixed	pac;
	Fixed	pbc;

	total_area = get_area(a, b, c);
	pab = get_area(point, a, b);
	pac = get_area(point, a, c);
	pbc = get_area(point, b, c);
	if (pab + pac + pbc != total_area)
		return (false);
	if (pab == 0 || pac == 0 || pbc == 0)
		return (false);
	return (true);
}
