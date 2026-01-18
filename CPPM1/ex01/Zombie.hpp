/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:18:24 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 22:15:41 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>
# include <iostream>
# include <stdlib.h>

class Zombie
{
	private:
		std::string	_name;

	public:
		Zombie(void);
		Zombie(std::string);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
};

#endif
