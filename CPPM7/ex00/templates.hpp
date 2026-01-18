/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 08:00:09 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/25 22:43:29 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>
#include <string>

template <class T>
void swap(T & a, T & b) {
	T tmp(a);
	a = b;
	b = tmp;
}

template <class T>
T min(T a, T b){
	if (a < b)
		return a;
	return b;
}

template <class T>
T max(T a, T b) {
	if (a > b)
		return a;
	return b;
}

#endif