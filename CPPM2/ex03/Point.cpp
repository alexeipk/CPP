/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 19:43:25 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 21:31:15 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : x(0), y(0) {
	return ;
}

Point::Point(float const x, float const y) : x(x), y(y) {
	return ;
}

Point::Point(Point const & point) {
	*this = point;
	return ;
}

Point::~Point(void) {
	return ;
}

const Point&	Point::operator=(Point const & point) const {
	Fixed	*tmp_x;
	Fixed	*tmp_y;

	tmp_x = (Fixed *) &this->x;
	tmp_y = (Fixed *) &this->y;
	*tmp_x = point.getX();
	*tmp_y = point.getY();
	return (*this);
}

Fixed	Point::getX(void) const {
	return (this->x);
}

Fixed	Point::getY(void) const {
	return (this->y);
}

std::ostream&	operator<<(std::ostream& out, Point const & point) {
	out << "(" << point.getX() << "," << point.getY() << ")";
	return (out);
}
