/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:41:30 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/19 16:36:12 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <vector>
using namespace std;

// //non member attribute and non member function
// //	on parler de variable ou bien fonction de class et non pas d'instance.

// class Sample
// {
// public:
// 	int foo;
// 	Sample();
// 	~Sample();
// 	void bar() const;
// };

// Sample::Sample(): foo(0){
// 	cout<<"contracteur" << endl;
// 	return ;
// }
// Sample::~Sample(){
// 	cout <<"destructeur"<<endl;
// 	return;
// }
// void Sample::bar(void)const{
// 	cout << "bar called"<<endl;
// 	return ;
// }
// int main(){
// 	Sample instance;
// 	Sample *instancep;//pointeur d'instance
// 	instancep = &instance;
// // syntax d'un pointeur sur un attribut membre de la class sample
// 	int Sample::*p = NULL;// la signefication : pointeur sur un membre de la calss sample
// 	void (Sample::*f)(void)const;//pointeur sur un fonction membre de la class

// 	p = &Sample::foo;

// 	cout << "value of membre foo: " << instance.foo<<endl;
// 	instance.*p = 21;
// 	cout << "value of membre foo: " << instance.foo<<endl;
// 	instancep->*p = 42;
// 	cout << "value of membre foo: " << instance.foo<<endl;

// 	f = &Sample::bar;

// 	(instance.*f)();
// 	(instancep->*f)();
// }

// class caracter
// {
// 	public : 
// 		virtual void hello(string  const &target)
// 		{
// 			cout << "caracter say hello\n";
// 		}
// 		virtual void foo();
	
// };

// class warrior : public caracter
// {
// 	public : 
// 		void hello(string  const &target)
// 		{
// 			cout << "warrior say hello\n";
// 		}
// 		void foo()
// 		{
// 			cout << "foo\n";
// 		}
// 		protected : 
// 			string a;
// };

// int main()
// {
// 	warrior *a = new warrior();

// 	caracter *b = new warrior();
// 	b->foo();
	 
// 	//function(t_derived 1); // chi 9wada class derived mn base
// 	//function(t_derived 2); // chi 9wada class derived mn base
// 	//function(t_derived 3); // chi 9wada class derived mn base
// 	//function(t_base *); // chi 9wada class derived mn base
// }
/*
the compailer also add a hidden pointer that is a member  of the base class
which well call vptr 
*/


// class A
// {
// 	int count;
// 	string str;
// 	public :
// 		A(){
// 			count = 0;
// 			str = "";
// 		};
// 		A(string s, int i){
// 			str = s;
// 			count = i;
// 		};
// 		void print()
// 		{
// 			if(count == 0)
// 				throw std::exeption();
// 			cout << count << endl;
// 			cout <<str<<endl;
// 		};
// };

int main()
{
	std::exception E;
	cout << E.what();
	// A test= A();
	// try
	// {
	// 	test.print();
	// }
	// catch(){
	// 	cerr << <<endl;
	// }
}