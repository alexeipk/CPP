/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:17:19 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/24 19:29:01 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"
#include <iostream>
#include <limits.h>
#include <stdlib.h> 
#include <float.h> 
#include <iomanip> 
#include <errno.h>

conversion::conversion(void) {}

conversion::conversion(char *str) : str(str) {
	this->detectType();
}

conversion::conversion(conversion const &instance) {
	*this = instance;
}

conversion &conversion::operator=(conversion const &obj) {
	this->str = obj.str;
	this->_type = obj._type;
	return *this;
}

conversion::~conversion(void) {}

void conversion::detectType() {
	std::string arg = str;
	if (((this->str[0] >= '!' && this->str[0] < '0') || (this->str[0] > '9' && this->str[0] <= '~')) && this->str[1] == '\0')
		this->_type = CHAR;
	else if (isInt(this->str))
		this->_type = INT;
	else if (isFloat(this->str))
		this->_type = FLOAT;
	else if (_isDouble(this->str))
		this->_type = DOUBLE;
	else if (arg == "-inff" || arg == "+inff" || arg == "nanf" || arg == "-inf" || arg == "+inf" || arg == "nan")
		this->_type = PSEUDO_LITERAL;
	else
		throw conversion::TypeNotFound();
}

bool conversion::isInt(char *str) {
	int i = 0;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool conversion::isFloat(char *str) {
	int i = 0;
	bool point = false;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.' && str[i] != 'f')
			return (false);
		if (str[i] == '.' && point == true)
			return (false);
		if (str[i] == 'f' && (str[i + 1] != '\0' || !point))
			return (false);
		if (str[i] == '.')
			point = true;
		i++;
	}
	if (str[i - 1] == 'f')
		return (true);
	return (false);
}

bool conversion::_isDouble(char *str) {
	int i = 0;
	bool point = false;
	if (str[i] == '-')
		i++;
	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != '.')
			return (false);
		if (str[i] == '.' && point == true)
			return (false);
		if (str[i] == '.')
			point = true;
		i++;
	}
	return (true);
}

void conversion::_convertNumeric(void) {
	void (conversion::*convert[3])(void) = {&conversion::_convertFrom,&conversion::_convertFrom,&conversion::_convertFrom};
	(this->*convert[this->_type])();
}

void conversion::_convertFrom(void) {
	if (_type == CHAR) {
		this->_char = this->str[0];
		this->_int = static_cast<int>(this->_char);
		this->_float = static_cast<float>(this->_char);
		this->_double = static_cast<double>(this->_char);
	}
	if (_type == INT) {
		this->_int = atoi(this->str);
		this->_char = static_cast<char>(this->_int);
		this->_float = static_cast<float>(this->_int);
		this->_double = static_cast<double>(this->_int);
	}
	if (_type == FLOAT) {
		this->_float = atof(this->str);
		this->_char = static_cast<char>(this->_float);
		this->_int = static_cast<int>(this->_float);
		this->_double = static_cast<double>(this->_float);
	}
	if (_type == DOUBLE) {
		this->_double = strtod(this->str, NULL);
		this->_char = static_cast<char>(this->_double);
		this->_float = static_cast<float>(this->_double);
		this->_int = static_cast<int>(this->_double);
	}
}

bool conversion::_typeOverflow(double checkValue) {
	bool (conversion::*TypeOverflow[3])(double checkValue) = {&conversion::checkOverflow,&conversion::checkOverflow,&conversion::checkOverflow};
	if (errno == ERANGE)
		return (true);
	if ((this->*TypeOverflow[this->_type])(checkValue))
		return (true);
	return (false);
}

bool conversion::checkOverflow(double checkValue) {
	if (_type == INT) {
		if (checkValue < INT_MIN || checkValue > INT_MAX)
			return (true);
		return (false);
	}
	if (_type == FLOAT) {
		if (checkValue < -FLT_MAX|| checkValue > FLT_MAX)
			return (true);
		return (false);
	}
	if (_type == DOUBLE) {
		if (checkValue < -DBL_MAX || checkValue > DBL_MAX)
			return (true);
		return (false);
	}
	return (true);
}

void conversion::print(int vchar, int vint, int vfloat, int vdouble) {
	if (vchar == 0)
		std::cout << "char: '" << this->_char << "'" << std::endl;
	if (vchar == 1)
		std::cout << "char: impossible" << std::endl;
	if (vchar == 2)
		std::cout << "char: '" << this->_pseudo_literal << "'" << std::endl;
	if (vchar == 3)
		std::cout << "char: Non displayable" << std::endl;
	if (vint == 0)
		std::cout << "int: " << this->_int << std::endl;
	if (vint == 1)
		std::cout << "int: impossible" << std::endl;
	if (vint == 2)
		std::cout << "int: " << this->_pseudo_literal << std::endl;
	if (vfloat == 0)
		std::cout << "float: " << this->_float << "f" << std::endl;
	if (vfloat == 1)
		std::cout << "float: impossible" << std::endl;
	if (vfloat == 2)
		std::cout << "float: " << this->_pseudo_literal << "f" << std::endl;
	if (vdouble == 0)
		std::cout << "double: " << this->_double << std::endl;
	if (vdouble == 1)
		std::cout << "double: impossible" << std::endl;
	if (vdouble == 2)
		std::cout << "double: " << this->_pseudo_literal <<  std::endl;
	std::cout << std::endl;
}

void conversion::display(void) {
	double checkValue = strtod(this->str, NULL);
	int v1 = 0; int v2 = 0; int v3 = 0; int v4 = 0;
	
	std::cout << std::fixed << std::setprecision(2);
	
	if (this->_type == CHAR) {
		this->_convertFrom();
		print(0, 0, 0, 0);
		return ;
	}

	if (_type == INT || _type == FLOAT || _type == DOUBLE) {
		if (_typeOverflow(checkValue))	{
			print(1, 1, 1, 1);
			return ;
		}
		this->_convertNumeric();
		if (checkValue < 0 || checkValue > 127)
			v1 = 1;
		else if  (checkValue < '!' || checkValue > '~')
			v1 = 3;
		if (this->checkOverflow(checkValue))
			v2 = 1;
		if (this->checkOverflow(checkValue))
			v3 = 1;
		print(v1, v2, v3, v4);
		return ;
	}
	
	if (this->_type == PSEUDO_LITERAL) 	{
		std::string pseudoLiteral = this->str;
		if (pseudoLiteral == "-inf" || pseudoLiteral == "+inf" || pseudoLiteral == "nan")
		{
			this->_pseudo_literal = this->str;
			print(1, 1, 2, 2);
			std::cout << std::endl;
			return ;
		}
		int i = 0;
		while (this->str[i + 1] != '\0')
			i++;
		this->str[i] = '\0';
		
		this->_pseudo_literal = this->str;
		print(1, 1, 2, 2);
		return ;
	}
}
