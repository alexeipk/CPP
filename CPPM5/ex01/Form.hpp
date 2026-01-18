/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:22:28 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/16 19:01:05 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <iostream>

class	Bureaucrat;

class	Form {
	public:
		Form(std::string const & name, int sign, int exec);
		Form(Form const & form);
		Form&	operator=(Form const & form);
		~Form(void);


		std::string const	getName(void) const;
		bool				getBoolSigned(void) const;
		int					getSign(void) const;
		int					getExec(void) const;
		void				beSigned(Bureaucrat const & bureaucrat);

		class	GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};

		class	GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		class	AlreadySignedException : public std::exception {
			public:
				const char* what() const throw();
		};

	private:
		Form(void);

		std::string const	_name;
		bool				_signed;
		int const			_sign_grade;
		int const			_exec_grade;
};

std::ostream&	operator<<(std::ostream& out, Form const & form);

#endif
