/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 19:23:07 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 19:36:19 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	{
		std::cout << "\n\n1st TEST-----------------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F1 with 1 signed grade and 2 exec grade..." << std::endl;
			Form	F1("Form1", 1, 2);
			std::cout << "New form 📜 created: @" << F1.getName() << "\n" << F1 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}

		std::cout << "\n\n2nd TEST-----------------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F2 with 0 signed grade and 2 exec grade..." << std::endl;
			Form	F2("Form2", 0, 2);
			std::cout << "New form 📜 created: @" << F2.getName() << "\n" << F2 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}
		
		std::cout << "\n\n3th TEST-----------------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F3 with 151 signed grade and 2 exec grade..." << std::endl;
			Form	F3("Form3", 151, 2);
			std::cout << "New form 📜 created: @" << F3.getName() << "\n" << F3 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}
		
		std::cout << "\n\n4th TEST-----------------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F4 with 1 signed grade and 0 exec grade..." << std::endl;
			Form	F4("Form4", 1, 0);
			std::cout << "New form 📜 created: @" << F4.getName() << "\n" << F4 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}
		
		std::cout << "\n\n5th TEST-----------------------------------------------" << std::endl;
		try {
			std::cout << "Try new form F5 with 1 signed grade and 151 exec grade..." << std::endl;
			Form	F5("Form5", 1, 151);
			std::cout << "New form 📜 created: @" << F5.getName() << "\n" << F5 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}

		std::cout << "\n\n6th TEST-----------------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat1("Bcrat1", 1);
			std::cout << "New bureaucrat 🛂 created: @" << Bcrat1.getName() << "\n" << Bcrat1 << std::endl;
			std::cout << "Try new form F6 with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F6("Form6", 1, 1);
			std::cout << "New form 📜 created: @" << F6.getName() << "\n" << F6 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat1.signForm(F6);
			std::cout << "Update of " << F6.getName() << "\n" << F6 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat1.signForm(F6);
			std::cout << "Update of " << F6.getName() << "\n" << F6 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}
		
		std::cout << "\n\n7th TEST-----------------------------------------------" << std::endl;
		try {
			Bureaucrat	Bcrat2("Bcrat2", 2);
			std::cout << "New bureaucrat 🛂 created: @" << Bcrat2.getName() << "\n" << Bcrat2 << std::endl;
			std::cout << "Try new form F7 with 1 signed grade and 1 exec grade..." << std::endl;
			Form	F7("Form7", 1, 1);
			std::cout << "New form 📜created: @" << F7.getName() << "\n" << F7 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7.getName() << "\n" << F7 << std::endl;
			std::cout << Bcrat2.getName() << "> +++Increment grade+++" << std::endl;
			Bcrat2.incGrade();
			std::cout << Bcrat2 << std::endl;
			std::cout << "Try to sign" << std::endl;
			Bcrat2.signForm(F7);
			std::cout << "Update of " << F7.getName() << "\n" << F7 << std::endl;
			std::cout << Bcrat2.getName() << "> +++Increment grade+++" << std::endl;
			Bcrat2.incGrade();
			std::cout << Bcrat2 << std::endl;
		} 
		catch (const Form::GradeTooHighException& e) {std::cout << e.what() << std::endl;}
		catch (const Form::GradeTooLowException& e) {std::cout << e.what() << std::endl;}
		catch(std::exception & e) {std::cout << "✋ Grade out of range " << e.what() << std::endl;}
	}

	std::cout << std::endl;
	return (0);
}
