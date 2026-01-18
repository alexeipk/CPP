/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 20:51:59 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/01 21:54:43 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

# define ENARG	"Invalid number of arguments, use the following syntax: \"./replace <./filename> <string to be replaced> <content to replace>\"."

std::string	sed(std::string line, std::string str1, std::string str2) {
	std::stringstream	ss;
	size_t				j;
	size_t				slength(str1.length());
	
	for (size_t i = 0; i < line.length(); i++) {
		j = 0;
		while (line[i + j] == str1[j] && j < slength)
			j++;
		if (j == slength) {
			ss << str2;
			i += (j - 1);}
		else 
			ss << line[i];
	}
	return (ss.str());
}

int		main(int ac, char **av) {
	if (ac != 4) {
		std::cout << ENARG << std::endl;
		return (1);
	}
	
	std::string			line;
	std::ofstream		output;
	std::string			fileName = av[1];
	std::ifstream		file(av[1]);
	if (!file.is_open()) {
		std::cout << "The file \"" << fileName << "\" does not exist." << std::endl;
		return (1);
	}
	output.open((fileName + ".replace").c_str(), std::ios::trunc);
	while (std::getline(file, line)) {
		output << sed(line, av[2], av[3]);
		if (!file.eof()) 
			output << '\n';
	}
	file.close();
	output.close();
	
	return (0);
}
