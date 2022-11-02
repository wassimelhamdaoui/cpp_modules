/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:40:15 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/18 19:57:59 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

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
	std::cout<< "DEBUG   : "<<std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" <<std::endl;
}
void Harl::info(void){
	std::cout<< "INFO    : "<<std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}
void Harl::warning(void)
{
	std::cout<< "WARNING : "<<std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR  : "<<std::endl << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	typedef void(Harl::*fonction)(void);
	fonction fonctab[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string comment[4] = {"debug","info", "warning", "error"};
	int i = -1;
	while(++i < 4)
		if(comment[i] == level)
			(this->*fonctab[i])();
		
}

int main()
{
	Harl instence;
	instence.complain("error");
	instence.complain("info");
	instence.complain("warning");
	instence.complain("error");
	return 0;
}