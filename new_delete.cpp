/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_delete.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 00:39:10 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/10 04:16:34 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<iostream>
using namespace std;
class Student
{
	private:
			string login;
	public:
			Student(string const &log): login(log){
			}
			~Student(){
			}
			string&	getlogref(){
				return login;
			}
			string const &getlogrefconst()const{
				return login;
			}
			string *getlogptr(){
				return &(login);
			}
			string const *getlogptrconst()const{
				return &(login);
			}
			
};


// int main(){
// 	int nbball = 42;

// 	int	*ballptr;
// 	int &ballref = nbball;

// 	ballptr = &nbball;

// 	cout << &nbball << " " << &ballptr << " " << &ballref << endl;
// 	*ballptr = 21;
// 	cout << nbball << endl;
// 	ballref = 84;
// 	cout << nbball << endl;
// 	return 0;
// }

int main(){
	Student bob = Student("bob");
	Student const jim = Student("jim");

	cout << bob.getlogrefconst() << " " << jim.getlogrefconst() << endl;
	cout << *(bob.getlogptrconst()) << " " << *(jim.getlogptrconst()) << endl;
}