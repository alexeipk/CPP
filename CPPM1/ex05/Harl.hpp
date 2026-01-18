/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 22:16:32 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/02 22:16:33 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HARL_H
# define HARL_H

# include <iostream>
# include <string>

class	Harl {
	private:
		std::string	_level[4];

		void		(Harl::*_function[4])(void);
		void		debug(void);
		void		info(void);
		void		warning(void);
		void		error(void);

	public:
		Harl(void);
		Harl(const Harl& rhs);
		Harl&	operator=(const Harl& rhs);
		void	complain(std::string level);
		~Harl(void);
};

#endif
