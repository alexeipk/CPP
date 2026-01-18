/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 22:14:37 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/08 13:01:56 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & claptrap);
		ClapTrap&	operator=(ClapTrap const & claptrap);
		~ClapTrap(void);

		virtual void	attack(std::string const & target) const;
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergy(void) const;
		unsigned int	getDamage(void) const;

	protected:
		ClapTrap(void);

		std::string		name;
		unsigned int	hitPoints;
		unsigned int	energyPoints;
		unsigned int	attackDamage;
	
};

#endif
