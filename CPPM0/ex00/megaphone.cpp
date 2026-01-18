/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:10:42 by aprotoce          #+#    #+#             */
/*   Updated: 2022/04/30 14:11:33 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define	MSG	"* LOUD AND UNBEARABLE FEEDBACK NOISE *"

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc == 1)
	{
		std::cout << MSG << std::endl;
		return (0);
	}
	for (i = 1 ; i < argc ; i++)
	{
		j = 0;
		while (argv[i][j])
			std::cout << char(toupper(argv[i][j++]));
	}
	std::cout << std::endl;
	return (0);
}
