/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:10:05 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 18:40:05 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:

		std::string	_target;
		RobotomyRequestForm(void);

	public:

		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		RobotomyRequestForm &	operator=(RobotomyRequestForm const & obj);
		virtual ~RobotomyRequestForm(void);

      	void	execute(Bureaucrat const & executor) const;
};
#endif
