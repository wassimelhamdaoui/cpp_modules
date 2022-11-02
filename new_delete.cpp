/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:39:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/26 23:01:50 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<iostream>
using namespace std;
// class Student
// {
// 	private:
// 			string login;
// 	public:
// 			Student(string const &log): login(log){
// 			}
// 			~Student(){
// 			}
// 			string&	getlogref(){
// 				return login;
// 			}
// 			string const &getlogrefconst()const{
// 				return login;
// 			}
// 			string *getlogptr(){
// 				return &(login);
// 			}
// 			string const *getlogptrconst()const{
// 				return &(login);
// 			}
			
// };


// // int main(){
// // 	int nbball = 42;

// // 	int	*ballptr;
// // 	int &ballref = nbball;

// // 	ballptr = &nbball;

// // 	cout << &nbball << " " << &ballptr << " " << &ballref << endl;
// // 	*ballptr = 21;
// // 	cout << nbball << endl;
// // 	ballref = 84;
// // 	cout << nbball << endl;
// // 	return 0;
// // }

// int main(){
// 	Student bob = Student("bob");
// 	Student const jim = Student("jim");

// 	cout << bob.getlogrefconst() << " " << jim.getlogrefconst() << endl;
// 	cout << *(bob.getlogptrconst()) << " " << *(jim.getlogptrconst()) << endl;
// }


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

