/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 22:23:14 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/09 22:25:29 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

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

#endif