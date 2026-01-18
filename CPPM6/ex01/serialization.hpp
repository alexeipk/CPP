/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:15:14 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/24 21:35:52 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>

typedef struct	s_Data
{
	std::string name;
	char		sigla;
	int			idade;
	float		pif;
	double		pid;
	bool		yn;
}				Data;

uintptr_t 	serialize(Data* ptr);
Data* 		deserialize(uintptr_t raw);

#endif
