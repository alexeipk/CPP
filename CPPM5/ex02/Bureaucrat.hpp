/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:13:15 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/16 18:32:16 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class	Form;

class	Bureaucrat {
	private:
		Bureaucrat(void);

		std::string const	name;
		int					grade;
		
	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & bureaucrat);
		Bureaucrat&	operator=(Bureaucrat const & bureaucrat);
		virtual ~Bureaucrat(void);

		std::string const	getName(void) const;
		int					getGrade(void) const;
		
		void				incGrade(void);
		void				decGrade(void);

		void				signForm(Form& form);
		void				executeForm(Form const & form);

		class	GradeTooHighException: public std::exception {
			virtual		const char* what() const throw();
		};

		class	GradeTooLowException: public std::exception {
			virtual		const char* what() const throw();
		};

};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & bureaucrat);

#endif
