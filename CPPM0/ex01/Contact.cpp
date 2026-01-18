/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:31:34 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 13:44:56 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void): _firstName(""),	_lastName(""),	_nickname(""),	_phoneNumber(""), _darkestSecret("") {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void Contact::display(void) {
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
	return ;
}

bool Contact::isEmpty(void) {
	if (this->_firstName != "")
		return false;
	if (this->_lastName != "")
		return false;
	if (this->_nickname != "")
		return false;
	if (this->_phoneNumber != "")
		return false;
	if (this->_darkestSecret != "")
		return false;
	return true;
}

void Contact::setFirstName(std::string value) {
	this->_firstName = value;
	return ;
}

void Contact::setLastName(std::string lastName) {
	this->_lastName = lastName;
	return ;
}

void Contact::setNickname(std::string nickname) {
	this->_nickname = nickname;
	return ;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->_phoneNumber = phoneNumber;
	return ;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string Contact::getFirstName(void) const {
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	return this->_lastName;
}

std::string Contact::getNickname(void) const {
	return this->_nickname;
}

std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber ;
}

std::string Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}
