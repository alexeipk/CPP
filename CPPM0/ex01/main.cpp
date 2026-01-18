/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 10:31:44 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 14:09:31 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp" 

static void	addContact(PhoneBook *phonebook){
	Contact		contact;
	std::string	nv1 = "FIRST NAME", nv2 = "LAST NAME", nv3 = "NICKNAME", nv4 = "PHONE NUMBER", nv5 = "DARKEST SECRET";

	std::cout << nv1 << ": "; std::getline(std::cin, nv1); contact.setFirstName(nv1);
	if (nv1 == "")
	{
		std::cout << "Insert anything value as input. Aborted operation!" << std::endl;
		return ;
	}
	std::cout << nv2 << ": "; std::getline(std::cin, nv2); contact.setLastName(nv2);
	if (nv2 == "")
	{
		std::cout << "Insert anything value as input. Aborted operation!" << std::endl;
		return ;
	}
	std::cout << nv3 << ": "; std::getline(std::cin, nv3); contact.setNickname(nv3);
	if (nv3 == "")
	{
		std::cout << "Insert anything value as input. Aborted operation!" << std::endl;
		return ;
	}
	std::cout << nv4 << ": "; std::getline(std::cin, nv4); contact.setPhoneNumber(nv4);
	if (nv4 == "")
	{
		std::cout << "Insert anything value as input. Aborted operation!" << std::endl;
		return ;
	}
	std::cout << nv5 << ": "; std::getline(std::cin, nv5); contact.setDarkestSecret(nv5);
	if (nv5 == "")
	{
		std::cout << "Insert anything value as input. Aborted operation!" << std::endl;
		return ;
	}
	phonebook->add(contact);
}

static void searchContact(PhoneBook phonebook)
{
	int		index;
	int		i;
	char	c;
	std::string	input;
	
	if (phonebook.isEmpty())
	{
		std::cout << "The phonebook is empty!" << std::endl;
		return ;
	}
	phonebook.ShowContacts();
	std::cout << "Choose a INDEX: "; std::getline(std::cin, input);
	index = 0;
	if (input.size() != 1)
		index = -1;
	c = input[0];
	i = c - '0';
	if (i > 0 && i < 9)
		index = i;
	if (index != -1)
		phonebook.displayContact(index);
	else
		std::cout << "\"" << input << "\"" << " is not a valid index." << std::endl;
}

int	main(void) {
	std::string	cmd;
	PhoneBook	phonebook;

	std::cout << "This is your phonebook, choose a command: ADD | SEARCH | EXIT" << std::endl;
	while (1) {
		std::cout << "Insert a command: "; std::getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			addContact(&phonebook);
		else if (cmd.compare("SEARCH") == 0)
			searchContact(phonebook);
		else if (cmd.compare("") == 0)
			continue ;
		else if (cmd.compare("EXIT") == 0)
			break ;
		else
			std::cout << "\"" << cmd << "\"" << " is not a valid command. You must choose ADD or SEARCH or EXIT." << std::endl;
	}
	return (0);
}
