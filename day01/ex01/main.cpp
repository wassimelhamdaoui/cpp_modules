/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:42:21 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/11 05:06:57 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Zombie{

	private :
		string name;
	public :
		 Zombie();
		~Zombie();
		void set_name(string name);
		void announce(void);
};

Zombie::Zombie(void){
}

Zombie::~Zombie()
{
	cout << this->name << ": le zombie est détruits" << endl;
}

void Zombie::set_name(string name){
	this->name = name;	
};

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new Zombie[N];
	for(int i = 0; i < N; i++){
		zombie[i].set_name(name);
	}
	return (zombie);
}

int main(){
	Zombie *zombie = zombieHorde(5,"foo");
	for(int i =0; i < 5; i++)
	{
		zombie[i].announce();
	}
	delete[] zombie;
	return 0;
}