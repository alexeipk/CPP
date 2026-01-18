/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 16:13:44 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 19:05:42 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Default") {
	this->grade = 150;
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name) {
	this->grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureaucrat) : name(bureaucrat.getName()) {
	*this = bureaucrat;
	return ;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const & bureaucrat) {
	if (this != &bureaucrat)
		this->grade = bureaucrat.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

std::string const	Bureaucrat::getName(void) const {
	return (this->name);
}

int		Bureaucrat::getGrade(void) const {
	return (this->grade);
}

void	Bureaucrat::decGrade(void) {
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void	Bureaucrat::incGrade(void) {
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	return ;
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw() {
	return ("✋ Grade is Too High ✋");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw() {
	return ("✋ Grade is Too Low ✋");
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade 🎖 " << bureaucrat.getGrade();
	return (out);
}
