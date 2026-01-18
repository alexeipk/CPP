/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:21:34 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 22:22:54 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
	
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp" 

class Intern {
	public:

		Intern(void);
		Intern(Intern const & src);
		Intern & operator=(Intern const & obj);
		virtual ~Intern(void);

		Form *	makeForm(std::string formName, std::string target);
		Form *	makePresidentialPardon(std::string target);
		Form *	makeRobotomyRequest(std::string target);
		Form *	makeShrubberyCreation(std::string target);

		class UnknownFormException : public std::exception{
			virtual const char* what() const throw();
		};
};

std::ostream &	operator<<(std::ostream & output, Intern const & obj);

#endif
