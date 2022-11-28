/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:17:51 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/26 02:26:24 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>

Base* generate()
{
	int i = time(NULL) % 3;
    std::cout << "generated: ";
    switch (i)
    {
    case 0:
            std::cout << "A";
            return new A();
    case 1:
            std::cout << "B";
            return new B();
    case 2:
            std::cout << "C";
            return new C();
    default:
            return NULL;
    }
}


void identify(Base* p)
{
        std::cout << "Identify by pointer: ";
        if (dynamic_cast<A*>(p))
                std::cout << "A" << std::endl;
        else if (dynamic_cast<B*>(p))
                std::cout << "B" << std::endl;
        else if (dynamic_cast<C*>(p))
                std::cout << "C" << std::endl;
        else
                std::cerr << "bad cast" << std::endl;

}

void identify(Base& p)
{
	A a;
	B b;
	C c;
    try
	{
        a = dynamic_cast<A &>(p);
        std::cout << "Identify by reference: A\n";
    }
    catch (std::bad_cast&)
	{
        try
		{
            b = dynamic_cast<B &>(p);
            std::cout << "Identify by reference: B\n";
        }
        catch (std::bad_cast&)
		{
			try
			{
                c = dynamic_cast<C &>(p);
                std::cout << "Identify by reference: C\n";
			}
			catch(std::bad_cast&)
			{
				std::cout << "bad_cast"<<std::endl;
			}
        }
    }
}

int main()
{
	Base *ptr = generate();
	std::cout << " pointer"<<std::endl;
    identify(ptr);
	
	std::cout <<"----------------------"<<std::endl;
	
	Base *tmp = generate();
	Base &ref = *tmp;
	std::cout << " reference"<<std::endl;
	identify(ref);
	
}