/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:23:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/09 22:27:01 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
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