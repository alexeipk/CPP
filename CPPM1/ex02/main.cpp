/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 20:13:32 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 17:30:44 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void){
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string; //busca o valor a partir do endereço
	std::string	&stringREF = string; //referencia o valor

	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << "  Type VAR  | Memory Address | Value " << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	std::cout << " string     | " << &string << " | " << string << std::endl;
	std::cout << " stringPTR  | " << stringPTR << " | " << *stringPTR << std::endl;
	std::cout << " stringREF  | " << &stringREF << " | " << stringREF << std::endl;
	std::cout << "----------------------------------------------------" << std::endl;
	return (0);
}