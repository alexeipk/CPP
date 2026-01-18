/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:12:00 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 21:37:58 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"  
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("shrubbery", 145, 137), _target(target) {
	std::cout << "🌳 Shruberry constructor" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src) {
	std::cout << "🌳🌳 Shruberry copy" << std::endl;
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	std::cout << "Shruberry destructor 🌳🔥" << std::endl;
	return ;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	std::ofstream	file;
	
	if (getBoolSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	file.open((_target + "_shrubbery").c_str());
	if (file.is_open() == true)
	{
		file << ASCIITREE;
		file.close();
	}
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & obj) {
	if (this != &obj)
	{
		_target = obj._target;
		Form::operator=(obj);
	}
	return *this;
}
