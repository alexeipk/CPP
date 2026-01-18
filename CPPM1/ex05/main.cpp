/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 21:51:36 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/02 22:10:27 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl = Harl();

	harl.complain("DEBUG");
	harl.complain("TESTEDEBUG");
	harl.complain("INFO");
	harl.complain("TESTEINFO");
	harl.complain("WARNING");
	harl.complain("TESTEWARNING");
	harl.complain("ERROR");
	harl.complain("TESTEERROR");
	return 0;
}
