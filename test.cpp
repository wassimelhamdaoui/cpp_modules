/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:41:30 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/09 23:49:32 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
using namespace std;

//non member attribute and non member function
//	on parler de variable ou bien fonction de class et non pas d'instance.

class Sample
{
public:
	int foo;
	Sample();
	~Sample();
	void bar() const;
};

Sample::Sample(): foo(0){
	cout<<"contracteur" << endl;
	return ;
}
Sample::~Sample(){
	cout <<"destructeur"<<endl;
	return;
}
void Sample::bar(void)const{
	cout << "bar called"<<endl;
	return ;
}
int main(){
	Sample instance;
	Sample *instancep;//pointeur d'instance
	instancep = &instance;
// syntax d'un pointeur sur un attribut membre de la class sample
	int Sample::*p = NULL;// la signefication : pointeur sur un membre de la calss sample
	void (Sample::*f)(void)const;//pointeur sur un fonction membre de la class

	p = &Sample::foo;

	cout << "value of membre foo: " << instance.foo<<endl;
	instance.*p = 21;
	cout << "value of membre foo: " << instance.foo<<endl;
	instancep->*p = 42;
	cout << "value of membre foo: " << instance.foo<<endl;

	f = &Sample::bar;

	(instance.*f)();
	(instancep->*f)();
}