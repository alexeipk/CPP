/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:21:27 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 22:51:58 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"  
	
Intern::Intern(void) {
	return ;
}

Intern::Intern(Intern const & obj) {
	*this = obj;
}

Form * Intern::makeForm(std::string formName, std::string target) {
	Form* tmp;
	Form* (Intern::*arrayFormFunc[3])(std::string target);
	std::string	arrayFormName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	arrayFormFunc[0] = &Intern::makeShrubberyCreation;
	arrayFormFunc[1] = &Intern::makeRobotomyRequest;
	arrayFormFunc[2] = &Intern::makePresidentialPardon;
	for (int i = 0; i < 3; i++)
	{
		if (arrayFormName[i] == formName)
		{
			tmp = (this->*(arrayFormFunc[i]))(target);
			std::cout << "Intern creates " << formName << std::endl;
			return tmp;
		}
		if (i == 2) throw UnknownFormException();
	}
	return NULL;
}

Intern &	Intern::operator=(Intern const & obj) {
	(void)obj;
	return *this;
}
	
Intern::~Intern(void) {
	return ;
}

Form *Intern::makePresidentialPardon(std::string target)	{return new PresidentialPardonForm(target);}
Form *Intern::makeRobotomyRequest(std::string target)		{return new RobotomyRequestForm(target);}
Form *Intern::makeShrubberyCreation(std::string target) 	{return new ShrubberyCreationForm(target);}

const char * Intern::UnknownFormException::what( void ) const throw() {
	return "Unknown Form!";
}

std::ostream &	operator<<(std::ostream & output, Intern const & obj) {
	(void)obj;
	output << "Bond, my name is James Bond, and I am a secret agent.\nIt's a joke, i'm a intern!" << std::endl;
	return output;
}
