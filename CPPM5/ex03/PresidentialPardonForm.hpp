/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:01:19 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 18:50:52 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
	
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
		PresidentialPardonForm(void);

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		PresidentialPardonForm &	operator=(PresidentialPardonForm const & obj);
		virtual ~PresidentialPardonForm(void);

      	void	execute(Bureaucrat const & executor) const;
};
#endif
