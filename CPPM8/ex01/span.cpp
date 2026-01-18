/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:46:44 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 22:42:09 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"  
	
Span::Span(void) : n(0) {return ;}

Span::Span(unsigned int N) : n(N) {return ;}

Span::Span(Span const & src) {*this = src;}

Span&	Span::operator=(Span const & obj)
{
	Span*						ptr_span;
	std::list<int>::iterator	it;

	if (this != &obj)
	{
		this->values.clear();
		this->n = obj.n;
		ptr_span = const_cast<Span *>(&obj);
		it = ptr_span->values.begin();
		while (it != ptr_span->values.end())
		{
			this->values.push_back(*it);
			it++;
		}
	}
	return (*this);
}

Span::~Span(void) {return ;}

void	Span::addNumber(int value) {
	if (this->values.size() == this->n)
		throw ExceptionElementOverflow();
	this->values.push_back(value);
	return ;
}

int	Span::shortestSpan(void) const {
	std::list<int>				tmp;
	std::list<int>::iterator	beg;
	std::list<int>::iterator	next;
	int							valuespan;

	if (this->values.size() < 2)
		throw ExceptionMinimalSize();
	tmp = this->values;
	tmp.sort();
	beg = tmp.begin();
	next = tmp.begin();
	next++;
	valuespan = *next - *beg;
	while (next != tmp.end())
	{
		if (*next - *beg < valuespan)
			valuespan = *next - *beg;
		beg++;
		next++;
	}
	return (valuespan);
}

int	Span::longestSpan(void) const{
	std::list<int>	tmp;

	if (this->values.size() < 2)
		throw ExceptionMinimalSize();
	tmp = this->values;
	tmp.sort();
	return (static_cast<int>(tmp.back() - tmp.front()));
}

const char* Span::ExceptionElementOverflow::what(void) const throw () {
	return "Impossible add a new element into vector.";
}

const char* Span::ExceptionMinimalSize::what(void) const throw () {
	return "The array size must be greater than one.";
}
