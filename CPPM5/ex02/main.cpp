/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 19:09:51 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 22:17:37 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Form* createForm(std::string formName, int gradeSign, int gradeExecute) {
	Form* form;

	try	{
		form = new Form(formName, gradeSign, gradeExecute);
		return form;
	}
	catch(const std::exception& e)	{
		std::cout << formName << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createShrubberyCreationForm(std::string target) {
	Form* form;

	try	{
		form = new ShrubberyCreationForm(target);
		return form;
	}
	catch(const std::exception& e)	{
		std::cout << target << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createPresidentialPardonForm(std::string target) {
	Form* form;

	try	{
		form = new PresidentialPardonForm(target);
		return form;
	}
	catch(const std::exception& e)	{
		std::cout << target << " : " << e.what() << std::endl;
		return NULL;
	}
}

Form* createRobotomyRequestForm(std::string target) {
	Form* form;

	try	{
		form = new RobotomyRequestForm(target);
		return form;
	}
	catch(const std::exception& e)	{
		std::cout << target << " : " << e.what() << std::endl;
		return NULL;
	}
}

int main(void){
	std::ofstream file;
		

	std::cout << "\n------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Shrub-----------------------------------------------------" << std::endl;
	std::cout << "Creating bureaucrats----------------------------------------------" << std::endl;
	Bureaucrat	BcratS1("BcratS1", 3);
	std::cout << "New bureaucrat 🛂 created: @" << BcratS1.getName() << "\n" << BcratS1 << std::endl;
	Bureaucrat	BcratS2("BcratS2", 138);
	std::cout << "New bureaucrat 🛂 created: @" << BcratS2.getName() << "\n" << BcratS2 << std::endl;
	Bureaucrat	BcratS3("BcratS3", 144);
	std::cout << "New bureaucrat 🛂 created: @" << BcratS3.getName() << "\n" << BcratS3 << std::endl;
	Bureaucrat	BcratS4("BcratS4", 147);
	std::cout << "New bureaucrat 🛂 created: @" << BcratS4.getName() << "\n" << BcratS4 << std::endl;
	std::cout << "Creating Form-----------------------------------------------------" << std::endl;
	Form* formShrub = createShrubberyCreationForm("Shrub");
	std::cout << "Sign and Execute tests--------------------------------------------" << std::endl;
	BcratS4.signForm(*formShrub);
	BcratS4.executeForm(*formShrub);
	BcratS3.signForm(*formShrub);
	BcratS3.executeForm(*formShrub);
	BcratS2.signForm(*formShrub);
	BcratS2.executeForm(*formShrub);
	BcratS2.incGrade();
	std::cout << BcratS2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
	std::cout << BcratS2 << std::endl;
	BcratS2.executeForm(*formShrub);
	BcratS2.decGrade();
	std::cout << BcratS2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
	std::cout << BcratS2 << std::endl;
	BcratS2.executeForm(*formShrub);
	BcratS1.signForm(*formShrub);
	BcratS1.executeForm(*formShrub);
	delete formShrub;
	std::cout << "Testing Shrub completed-------------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;



	std::cout << "\n------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Robotomy--------------------------------------------------" << std::endl;
	std::cout << "Creating bureaucrats----------------------------------------------" << std::endl;
	Bureaucrat	BcratR1("BcratR1", 3);
	std::cout << "New bureaucrat 🛂 created: @" << BcratR1.getName() << "\n" << BcratR1 << std::endl;
	Bureaucrat	BcratR2("BcratR2", 46);
	std::cout << "New bureaucrat 🛂 created: @" << BcratR2.getName() << "\n" << BcratR2 << std::endl;
	Bureaucrat	BcratR3("BcratR3", 71);
	std::cout << "New bureaucrat 🛂 created: @" << BcratR3.getName() << "\n" << BcratR3 << std::endl;
	Bureaucrat	BcratR4("BcratR4", 147);
	std::cout << "New bureaucrat 🛂 created: @" << BcratR4.getName() << "\n" << BcratR4 << std::endl;
	std::cout << "Creating Form-----------------------------------------------------" << std::endl;
	Form* formRobot = createRobotomyRequestForm("Robotomy");
	std::cout << "Sign and Execute tests--------------------------------------------" << std::endl;
	BcratR4.signForm(*formRobot);
	BcratR4.executeForm(*formRobot);
	BcratR3.signForm(*formRobot);
	BcratR3.executeForm(*formRobot);
	BcratR2.signForm(*formRobot);
	BcratR2.executeForm(*formRobot);
	BcratR2.incGrade();
	std::cout << BcratR2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
	std::cout << BcratR2 << std::endl;
	BcratR2.executeForm(*formRobot);
	BcratR2.decGrade();
	std::cout << BcratR2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
	std::cout << BcratR2 << std::endl;
	BcratR2.executeForm(*formRobot);
	BcratR1.signForm(*formRobot);
	BcratR1.executeForm(*formRobot);
	delete formRobot;
	std::cout << "Testing Robotomy completed----------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;



	std::cout << "\n------------------------------------------------------------------" << std::endl;
	std::cout << "Testing Presidential----------------------------------------------" << std::endl;
	std::cout << "Creating bureaucrats----------------------------------------------" << std::endl;
	Bureaucrat	BcratP1("BcratP1", 3);
	std::cout << "New bureaucrat 🛂 created: @" << BcratP1.getName() << "\n" << BcratP1 << std::endl;
	Bureaucrat	BcratP2("BcratP2", 6);
	std::cout << "New bureaucrat 🛂 created: @" << BcratP2.getName() << "\n" << BcratP2 << std::endl;
	Bureaucrat	BcratP3("BcratP3", 24);
	std::cout << "New bureaucrat 🛂 created: @" << BcratP3.getName() << "\n" << BcratP3 << std::endl;
	Bureaucrat	BcratP4("BcratP4", 147);
	std::cout << "New bureaucrat 🛂 created: @" << BcratP4.getName() << "\n" << BcratP4 << std::endl;
	std::cout << "Creating Form-----------------------------------------------------" << std::endl;
	Form* formPres = createPresidentialPardonForm("Presidential");
	std::cout << "Sign and Execute tests--------------------------------------------" << std::endl;
	BcratP4.signForm(*formPres);
	BcratP4.executeForm(*formPres);
	BcratP3.signForm(*formPres);
	BcratP3.executeForm(*formPres);
	BcratP2.signForm(*formPres);
	BcratP2.executeForm(*formPres);
	BcratP2.incGrade();
	std::cout << BcratP2.getName() << "> +++Increment ⬆ grade+++" << std::endl;
	std::cout << BcratP2 << std::endl;
	BcratP2.executeForm(*formPres);
	BcratP2.decGrade();
	std::cout << BcratP2.getName() << "> ---Decrement ⬇ grade---" << std::endl;
	std::cout << BcratP2 << std::endl;
	BcratP2.executeForm(*formPres);
	BcratP1.signForm(*formPres);
	BcratP1.executeForm(*formPres);
	delete formPres;
	std::cout << "Testing Presidential completed------------------------------------" << std::endl;
	std::cout << "------------------------------------------------------------------" << std::endl;

	return (0);
}
