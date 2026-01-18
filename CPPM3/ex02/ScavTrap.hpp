/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 13:06:01 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 13:06:03 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class	ScavTrap : public ClapTrap
{
	private:
		ScavTrap(void);
		
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & scavtrap);
		ScavTrap&	operator=(ScavTrap const & scavtrap);
		~ScavTrap(void);

		void	attack(std::string const & target) const;
		void	guardGate(void);
};

#endif
