/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:03:08 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 22:53:57 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"  
	
Form::Form(std::string name, int gradeSign, int gradeExecute): 
			_name(name), _isSigned(false), _gradeSign(gradeSign),_gradeExecute(gradeExecute) {
	if (gradeSign < 1 || gradeExecute < 1)
		throw GradeTooHighException();
	else if (gradeSign > 150 || gradeExecute > 150)
		throw GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExecute(src._gradeExecute) {
	*this = src;
}
	
Form::~Form(void) {
	return ;
}

const	std::string	Form::getName(void) const {
	return _name;
}

bool	Form::getBoolSigned(void) const	{
	return _isSigned;
}
	
int		Form::getGradeSign(void) const {
	return _gradeSign;
}

int		Form::getGradeExecute(void) const {
	return _gradeExecute;
}

void	Form::setIsSigned(bool s) {
	_isSigned = s;
}

Form &	Form::operator=(Form const & form) {
	if (this != &form)
		_isSigned = form._isSigned;
	return *this;
}

void	Form::beSigned(Bureaucrat const & bureaucrat) {
	if (bureaucrat.getGrade() > _gradeSign)
		throw GradeTooLowException();
	_isSigned = true;
}

void	Form::execute(Bureaucrat const & executor) const {
	if (getBoolSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
}

std::ostream &	operator<<(std::ostream & output, Form const & valform) {
	output << valform.getName() << " is ";
	valform.getBoolSigned() == true ? output << "" : output << "not ";
	output << "signed and required grade " << valform.getGradeSign();
	output << " to be signed and " << valform.getGradeExecute() << " to be executed." << std::endl;
	return output;
}

const char * Form::GradeTooHighException::what(void) const throw() {
	return "👎 The grade is too high. 👎";
}

const char * Form::GradeTooLowException::what(void) const throw() {
	return "👎 The grade is too low. 👎";
}

const char * Form::FormIsNotSignedException::what(void) const throw() {
	return "👎 The form is not signed. 👎";
}
