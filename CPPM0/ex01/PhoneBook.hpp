/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 22:09:53 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 13:26:56 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook(void);
	~PhoneBook(void);

	void	add(Contact contact);
	void	ShowContacts(void);
	void	displayContact(int index);
	bool	isEmpty(void);
	
private:
	Contact	_contacts[8];
	int		_oldest;
};

#endif
