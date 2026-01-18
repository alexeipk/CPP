/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:10:11 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 20:44:45 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"  
	
RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("robotomy request", 72, 45), _target(target) {
	std::cout <<"Robotomy constructor 🪓🤖" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src) {
	*this = src;
	std::cout << "Robotomy copy 🪓🤖 🪓🤖" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	std::cout << "Robotomy destructor 🪓🤖🧸" << std::endl;
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	std::srand(time(NULL));
	if (getBoolSigned() == false)
		throw FormIsNotSignedException();
	else if (executor.getGrade() > getGradeExecute())
		throw GradeTooLowException();
	std::cout << "🧑‍⚕️ 👷💥🧨🔌🪓🔧🔩⚙ 🗜" << std::endl;
	std::cout << _target << " has ";
	rand() % 2 == 0 ? std::cout << "🧸 " : std::cout << "NOT 🤖 ";
	std::cout << "been robotomized successfully" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & obj) {
	if (this != &obj)
	{
		_target = obj._target;
		Form::operator=(obj);
	}
	return *this;
}
