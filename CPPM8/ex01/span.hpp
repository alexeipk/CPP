/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:46:51 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 22:42:31 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <list>
#include <algorithm>
#include <climits>

class Span  
{
	private:
		unsigned int		n;
		std::list<int>		values;

	public:
		Span(void);
		Span(unsigned int N);
		Span(Span const & src);
		virtual ~Span(void);
		
		Span& operator=(Span const & obj);

		void	showNumbers(void);
		void	addNumber(int number);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;

		template <typename T>
		void	addALotOfNumbers(T& begin, T& end) {
			for (; begin != end; begin++)
				this->addNumber(*begin);
			return ;
		}

		class ExceptionElementOverflow : public std::exception {
				const char* what(void) const throw ();
		};

		class ExceptionMinimalSize : public std::exception {
				const char* what(void) const throw ();
		};
		
};

#endif
