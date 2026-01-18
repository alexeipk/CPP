/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 18:55:01 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 17:57:24 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>	
#include <cstdlib>	
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form  {
	public:
		Form(std::string name, int sign, int exec);
		Form(Form const & form);
		Form & operator=(Form const & form);
		virtual ~Form();

		const std::string	getName(void) const;
		bool				getBoolSigned(void) const;
		int					getGradeSign(void) const;
		int					getGradeExecute(void) const;
		void				setIsSigned(bool isSigned);

		void				beSigned(Bureaucrat const & buraucrat);
		virtual void		execute(Bureaucrat const & executor) const;

		class GradeTooHighException : public std::exception	{
			virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception {
			virtual const char* what() const throw();
		};

		class FormIsNotSignedException : public std::exception{
			virtual const char* what() const throw();
		};
		
	private:
		const std::string		_name;
		bool					_isSigned;
		const int				_gradeSign;
		const int				_gradeExecute;
};

std::ostream &	operator<<( std::ostream & output, Form const & rhs );

#endif
