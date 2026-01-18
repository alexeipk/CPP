/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:01:09 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 22:08:20 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"  
	
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 25, 5), _target(target) {
	std::cout << "PresidentialPardon constructor 🆓" << std::endl;
	return;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src) {
	*this = src;
	std::cout << "PresidentialPardon copy 🆓🆓" << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & obj) {
	if (this != &obj)
	{
		_target = obj._target;
		Form::operator=(obj);
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	std::cout << "PresidentialPardon destructor 🆓❌" << std::endl;
	return ;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (getBoolSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox 🆓🆓🆓." << std::endl;
}
