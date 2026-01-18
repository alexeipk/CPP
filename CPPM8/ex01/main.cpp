/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:46:35 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/28 22:40:31 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

static void	callShortestSpan(Span & getArray) {
	try {std::cout << "Shortest span: " << getArray.shortestSpan() << std::endl;}
	catch(const std::exception& e) {std::cerr << e.what() << std::endl;}
}

static void	callLongestSpan(Span & getArray) {
	try {std::cout << "Longest span: " << getArray.longestSpan() << std::endl;}
	catch(const std::exception& e)	{std::cerr << e.what() << std::endl;}
}

int main(void) {
{
	std::cout << "\n\nSubject tests----------------------------------------------" << std::endl;
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
{
	std::cout << "\n\n\nMy tests---------------------------------------------------" << std::endl;
	std::cout << "\n1st TEST - Overflow----------------------------------------" << std::endl;
	Span sp = Span(1);
	try	{
			sp.addNumber(42);
			sp.addNumber(42);
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n2nd TEST - Dup---------------------------------------------" << std::endl;
	Span sp = Span(2);
	try	{
			sp.addNumber(42);
			sp.addNumber(42);
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n3th TEST - Empty List--------------------------------------" << std::endl;
	Span sp = Span(2);
	try	{
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n4th TEST - List with 1 element-----------------------------" << std::endl;
	Span sp = Span(2);
	try	{
			sp.addNumber(42);
			std::cout << "[42]" << std::endl;
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n5th TEST - List with 2 elements----------------------------" << std::endl;
	Span sp = Span(2);
	try	{
			sp.addNumber(0);
			sp.addNumber(42);
			std::cout << "[0 42]" << std::endl;
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n6th TEST - List with 5 positive elements-------------------" << std::endl;
	Span sp = Span(5);
	try	{
			sp.addNumber(0);
			sp.addNumber(42);
			sp.addNumber(21);
			sp.addNumber(10);
			sp.addNumber(1);
			std::cout << "[0 42 21 10 1]" << std::endl;
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n7th TEST - List with 5 negative elements-------------------" << std::endl;	
	Span sp = Span(5);
	try	{
			sp.addNumber(-2);
			sp.addNumber(-42);
			sp.addNumber(-21);
			sp.addNumber(-10);
			sp.addNumber(-1);
			std::cout << "[-2 -42 -21 -10 -1]" << std::endl;
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n8th TEST - List with 5 positive and negative elements-----" << std::endl;
	Span sp = Span(5);
	try	{
			sp.addNumber(-2);
			sp.addNumber(-21);
			sp.addNumber(21);
			sp.addNumber(10);
			sp.addNumber(-1);
			std::cout << "[-2 -21 21 10 -1]" << std::endl;
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n9th TEST - List with 10k elements--------------------------" << std::endl;
	Span						sp = Span(10000);
	std::list<int>				lst;
	std::list<int>::iterator	beg;
	std::list<int>::iterator	end;

	try	{
			for (int i = 1; i <= 10000; i++)
				lst.push_back(i);

			beg = lst.begin();
			end = lst.end();
			sp.addALotOfNumbers(beg, end);
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
{
	std::cout << "\n10th TEST - List with 50k random elements------------------" << std::endl;
	Span						sp = Span(50000);
	std::list<int>				lst;
	std::list<int>::iterator	beg;
	std::list<int>::iterator	end;

	srand(time(NULL));
	try	{
			for (int i = 1; i <= 50000; i++)
				lst.push_back(rand() % INT_MAX);

			beg = lst.begin();
			end = lst.end();
			sp.addALotOfNumbers(beg, end);
			callShortestSpan(sp);
			callLongestSpan(sp);
		}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
}
	return 0;
}
