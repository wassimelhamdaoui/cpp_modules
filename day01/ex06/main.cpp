/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:58:46 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/17 14:03:01 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>


class Harl
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl(void);
	~Harl(void);
	void complain(std::string level);
};
Harl::Harl()
{
}

Harl::~Harl()
{
}
void Harl::debug(void){
	std::cout<< "[ DEBUG ]"<<std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" <<std::endl;
}
void Harl::info(void){
	std::cout<< "[ INFO ]"<<std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning(void)
{
	std::cout<< "[ WARNING ]"<<std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]"<<std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	typedef void(Harl::*fonction)(void);
	fonction fonctab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string comment[4] = {"debug","info", "warning", "error"};
	int i;
	for(i = 0; i < 4 && level != comment[i]; i++);

	switch (i)
	{
		case 0:
			(this->*fonctab[i])();
			i++;
		case 1:
			(this->*fonctab[i])();
			i++;
		case 2:
			(this->*fonctab[i])();
			i++;
		case 3:
			(this->*fonctab[i])();
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]"<< std::endl;
		break;
	}
}

int main(int ac, char **av)
{
	std::string command;
	if(ac != 2)
	{
		std::cout << "./HarlFilter <COMMENT>" << std::endl;
		return 0;
	}
	command = av[1];
	for(int i = 0; i < command.length(); i++)
		command[i] = (char)tolower(command[i]);
	
	Harl().complain(command);
}