/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:27:00 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/14 06:39:31 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

using std::string;
using std::cout;
using std::endl;


//weapon class here*****
class Weapon
{
private:
	string type;
public:
	string getType(void) ;
	void setType(string str);
 	Weapon(string str);
	 ~Weapon();
};

 Weapon::Weapon(string str): type(str)
{
}

 Weapon::~Weapon()
{
}

string Weapon::getType(void) {
	return(this->type);
}

void Weapon::setType(string str){
	this->type = str;
}
//**********************
//HumanA class here ****
//**********************
class HumanA
{
private:
	string name;
	Weapon &Human;
public:
	HumanA(string name, Weapon &Human);
	~HumanA();
	void attack(void) const;
};

HumanA::HumanA(string name, Weapon &Human): name(name), Human(Human)
{
}

HumanA::~HumanA()
{
}
void HumanA::attack(void) const{
	cout <<this->name<<" attacks with their "<<this->Human.getType()<<endl;
}


//**********************
//Humanb class here ****
//**********************
class HumanB
{
private:
	string name;
	Weapon *Human;
public:
	HumanB(string str);
	~HumanB();
	void setWeapon(Weapon &human);
	void attack(void);
};

HumanB::HumanB(string str): Human(NULL)
{
	this->name = str;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon &human){
	this->Human = &human;
}

void HumanB::attack() {
	if(this->Human == NULL)
		cout << this->name << " attacks with :D" << endl;
	else
		cout <<this->name<<" attacks with their "<<this->Human->getType() << endl;
}

int main()
{
	{	
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		 jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}