/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 08:52:52 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/29 10:05:12 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main(void) {
{
	std::cout << "\n\nTests from subject-----------------------------------------------------------" << std::endl;
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(1);
	mstack.push(42);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "stack s.size() : " << s.size() << " | MutantStack mstack.size() : "  << mstack.size() << std::endl;
}
	std::cout << "\n\nMy Tests --------------------------------------------------------------------" << std::endl;
{ 
	std::cout << "Int Type --------------------------------------------------------------------" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(0);
	mstack.push(1);
	mstack.push(42);
	mstack.push(99);
	mstack.push(100);
	std::cout << "Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	for (int i = 0; it != ite; ++it, ++i)
		std::cout << "mstack[" << i << "]: " << *it << std::endl;

	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
}
{
	std::cout << "String Type -----------------------------------------------------------------" << std::endl;
	MutantStack<std::string> mstack;
	
	std::string	str[5] = {"This", "is", "a", "first", "test"};

	for (int i = 0; i < 5; ++i){
		mstack.push(str[i]);
		std::cout << "Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	}
	std::cout << "Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	
	mstack.push("by");
	mstack.push("Alexei");
	std::cout << "Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	
	for (int i = 0; it != ite; ++it, ++i)
		std::cout << "mstack[" << i << "]: " << *it << std::endl;

	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
}
{
	std::cout << "Float Type ------------------------------------------------------------------" << std::endl;
	MutantStack<float>	mstack;
	
	mstack.push(0.0);
	mstack.push(1.1);
	mstack.push(2.22);
	mstack.push(3.333);
	mstack.push(42.42);
	std::cout << "Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	
	MutantStack<float>::iterator it = mstack.begin();
	MutantStack<float>::iterator ite = mstack.end();
	
	for (int i = 0; it != ite; ++it, ++i)
		std::cout << "mstack[" << i << "]: " << *it << std::endl;

	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Exec 'Pop' || Size of mstack : " << mstack.size() << " || " << "Top of mstack  : " << mstack.top() << std::endl;
}
	return 0;
}