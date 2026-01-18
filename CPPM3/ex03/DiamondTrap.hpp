/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 18:56:13 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 18:56:15 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>

class	DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		DiamondTrap(void);
		
	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & diamondtrap);
		DiamondTrap&	operator=(DiamondTrap const & diamondtrap);
		~DiamondTrap(void);

		void	attack(std::string const & target) const;
		void	whoAmI(void) const;

		std::string	getName(void) const;
		std::string	name;
};

#endif
