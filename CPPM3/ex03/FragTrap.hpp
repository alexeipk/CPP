/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 16:52:58 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 20:01:45 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	FragTrap : virtual public ClapTrap
{
	private:
		
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & fragtrap);
		FragTrap&	operator=(FragTrap const & fragtrap);
		~FragTrap(void);

		void	highFivesGuys(void) const;
};

#endif
