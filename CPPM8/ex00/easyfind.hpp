/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:40:53 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/29 11:57:50 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>

class NotFoundException: public std::exception {
	public:
		virtual const char *what() const throw() {
			return ("Value not found");
		}
};

template <typename T>
void	easyFind(T container, int num) {
	typename T::iterator iter;
	iter = std::find(container.begin(), container.end(), num);
	if (*iter == num)
		std::cout << "Value found: " << num << std::endl;
	else
		throw NotFoundException();
}

#endif
