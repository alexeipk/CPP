/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 21:31:37 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/05 21:32:14 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class	Point
{
	private:
		Fixed const	x;
		Fixed const	y;
		
	public:
		Point(void);
		Point(float const x, float const y);
		const Point&	operator=(Point const & point) const;
		Point(Point const & point);
		~Point(void);

		Fixed		getX(void) const;
		Fixed		getY(void) const;
};

std::ostream&	operator<<(std::ostream& out, Point const & point);

#endif
