/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 08:53:40 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/29 10:05:41 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <deque>

template <typename T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {};
	MutantStack(MutantStack const &instance) : std::stack<T>(instance) {};
	MutantStack	&operator=(MutantStack const &instance) {this->c = instance.c; return *this;};
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void) {return this->c.begin();};
	iterator	end(void) {return this->c.end();};
};

#endif