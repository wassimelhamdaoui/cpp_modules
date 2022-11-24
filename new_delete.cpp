/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:39:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/18 13:49:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<iostream>
using namespace std;

/*
flexibility in precision in range in sata size its easier to cast integers to fixed point
some operations are slower precison is usually less then floating point range
ni inbuilt instraction
the idea of fixed point arithmetic is we use integer but change their meanings
we say that all of the integers involved in our fixed point arithmetic represent their values multiplied
for instance the scaling factor might be 1/10
were saying it means 118/16 or



canonical form :
				defult constractor
				copy constractor : is an overloaded constractor used to declare and initialize from another object
				destractor
				copy assignement operator
a standard class should look like the folowing code::
	class sample
	{
		public :
			sample();  defult constractor
			sample(const A &a);  copy constractor
			~sample();	destractor
			sample &operator = (const sample &a);	copy assignement operato
	};

*/
class a
{
	public :
		virtual void foo()
		{
			std::cout <<"foo : class a\n";
		}
};

class b : public a
{
	public :
		void boo()
		{
			std::cout << "foo : class b\n";
		}
};

void print (a & obj){
	obj.foo();
}
int main()
{
	// a ob1;
	b ob2;
	// print(ob1);
	print(ob2);
}