/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:21:10 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 19:40:01 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("Default"), _sign_grade(50), _exec_grade(50) {
	this->_signed = false;
	return ;
}

Form::Form(std::string const & name, int sign, int exec) : _name(name), _sign_grade(sign), _exec_grade(exec) {
	this->_signed = false;
	if (this->_sign_grade < 1 || this->_exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & form) : _name(form.getName()), _sign_grade(form.getSign()), _exec_grade(form.getExec()) {
	if (this->_sign_grade < 1 || this->_exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (this->_sign_grade > 150 || this->_exec_grade > 150)
		throw Form::GradeTooLowException();
	*this = form;
	return ;
}

Form&	Form::operator=(Form const & form) {
	std::cout << "Does not make sense to assign " << form.getName() << " to " << this->_name << std::endl;
	return (*this);
}

Form::~Form(void) {
	return ;
}

std::string const	Form::getName(void) const {
	return (this->_name);
}

bool	Form::getBoolSigned(void) const {
	return (this->_signed);
}

int		Form::getSign(void) const {
	return (this->_sign_grade);
}

int		Form::getExec(void) const {
	return (this->_exec_grade);
}

void	Form::beSigned(Bureaucrat const & bureaucrat) {
	int	bur_grade;

	if (this->_signed)
		throw Form::AlreadySignedException();
	bur_grade = bureaucrat.getGrade();
	if (bur_grade <= this->_sign_grade)
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
	return ;
}

const char*	Form::GradeTooHighException::what(void) const throw() {
	return ("👎 Grade is Too High 👎");
}

const char*	Form::GradeTooLowException::what(void) const throw() {
	return ("👎 Grade is Too Low 👎");
}

const char*	Form::AlreadySignedException::what(void) const throw() {
	return ("🛑 Form is Already Signed");
}

std::ostream&	operator<<(std::ostream& out, Form const & form) {
	out << form.getName() << ", ✍  Form Signed: " << form.getBoolSigned() << ", Signed Grade: " << form.getSign() << ", Exec Grade: " << form.getExec();
	return (out);
}
