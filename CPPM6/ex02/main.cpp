/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aprotoce <aprotoce@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:38:16 by aprotoce          #+#    #+#             */
/*   Updated: 2022/05/24 22:09:02 by aprotoce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>

class Base { public: virtual ~Base(void){ return ; } };
class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void) {
	Base *class_pointer;
	std::string	classes [] = {"A", "B", "C"};
	
	srand (time(NULL));
	int random = rand() % 3;

	std::cout << "\nRandom class >>>>>>>>> " << classes[random] << std::endl;
	if (random == 0)
		class_pointer = new A();
	if (random == 1)
		class_pointer = new B();
	if (random == 2)
		class_pointer = new C();

	return class_pointer;
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Pointer class >>>>>>>> " << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointer class >>>>>>>> " << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointer class >>>>>>>> " << "C" << std::endl;
}

void identify(Base& p) {
	try {
		dynamic_cast<A &>(p);
		std::cout << "Reference class >>>>>> A" << std::endl;
	}
	catch (std::exception &e){std::cout << "Class A " << e.what() << std::endl;}
	try {
		dynamic_cast<B &>(p);
		std::cout << "Reference class >>>>>> B" << std::endl;
	}
	catch (std::exception &e) {std::cout << "Class B " << e.what() << std::endl;}
	try {
		dynamic_cast<C &>(p);
		std::cout << "Reference class >>>>>> C" << std::endl;
	}
	catch (std::exception &e) {std::cout << "Class C " << e.what() << std::endl;}
}

int main(void) {
	Base *random_class = generate();
	identify(random_class);
	Base &class_reference = *random_class;
	identify(class_reference);
	delete random_class;
}
