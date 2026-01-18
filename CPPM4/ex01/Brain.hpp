/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/14 17:15:26 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/14 17:16:01 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class	Brain {
	public:
		Brain(void);
		Brain(Brain const & brain);
		Brain&	operator=(Brain const & brain);
		~Brain(void);

		int				getPos(void) const;
		std::string*	getIdeas(void) const;
		void			setIdeas(std::string ideas);

	private:
		std::string*	ideas;
		int				pos;
};

#endif
