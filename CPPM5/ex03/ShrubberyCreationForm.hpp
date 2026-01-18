/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 18:11:52 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/21 18:32:38 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
	
#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
	private:
		std::string  _target;
		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & obj);
		virtual ~ShrubberyCreationForm(void);

		void	execute(Bureaucrat const & executor) const;
};

#define ASCIITREE "\
.mainFolder\n\
├───folder_1\n\
├───folder_2\n\
├───folder_3\n\
│   └───folder_3_1\n\
│       ├───folder_3_1_1\n\
│       └───folder_3_1_2\n\
│           └───folder_3_1_2_1\n\
├───folder_4\n\
│   ├───folder_4_1\n\
│   └───folder_4_2\n\
├───folder_5\n\
├───folder_6\n\
├───folder_7\n\
└───folder_8\n\
"
				  
#endif
