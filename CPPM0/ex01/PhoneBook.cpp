/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 12:53:23 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 13:32:36 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _oldest(0) {
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}

void	PhoneBook::add(Contact contact) {
	if (contact.isEmpty())
		return ;
	this->_contacts[this->_oldest++] = contact;
	if (this->_oldest == 8)
		this->_oldest = 0;
}

bool	PhoneBook::isEmpty(void) {
	if (!this->_contacts[0].isEmpty())
		return false;
	return true;
}

void	PhoneBook::ShowContacts(void) {
	std::string msg;
	
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (!this->_contacts[i].isEmpty())
		{
			std::cout << "|" << std::setw(10) << (i + 1);
			msg = this->_contacts[i].getFirstName();
			if (msg.size() > 10)
				msg = msg.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << msg;
			msg = this->_contacts[i].getLastName();
			if (msg.size() > 10)
				msg = msg.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << msg;
			msg = this->_contacts[i].getNickname();
			if (msg.size() > 10)
				msg = msg.substr(0, 9) + ".";
			std::cout << "|" << std::setw(10) << msg << "|" << std::endl;
		}
	}
	return ;
}

void	PhoneBook::displayContact(int index) {
	if (this->_contacts[index - 1].isEmpty())
		std::cout << "Empty contact" << std::endl;
	else 
		this->_contacts[index - 1].display();
}
