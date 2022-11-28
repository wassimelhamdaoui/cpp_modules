/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:02:11 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/25 05:26:01 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>
#include <cstdlib>
#include <iomanip>

void check_validarg(std::string &str, bool &validarg)
{
	bool moin = false;
	bool plus = false;
	bool check_f = false;
	bool check_dot = false;
	for(size_t i=0; str.length() != 1 && i < str.length() && validarg; i++)
	{
		if(str[i] == '.' && !check_dot)
			check_dot = true;
		else if(str[i] == '.')
			validarg = false;
		if(str[i] == 'f' && (check_dot && !check_f))
			check_f = true;
		else if(str[i] == 'f')
			validarg = false;
		else if(!isprint(str[i]))
			validarg = false;
		if(check_f && str[i+1])
			validarg = false;
		if(str[i] == '-' && !moin)
			moin = true;
		else if(str[i] == '-')
			validarg = false;
		if(str[i] == '+' && !plus)
			plus = true;
		else if(str[i] == '+')
			validarg = false;
	}
}
//check if there's . and f
bool is_float(std::string &str)
{
	return (str.find('.') != std::string::npos && str.find('f') != std::string::npos);
}
//check if there's . without f
bool is_double(std::string &str)
{
	if(str.find('.') != std::string::npos)
		return true;
	return false;
}

void cast_integer(std::string &str)
{
	int value;
	if(str.length() != 1 || (str.length() == 1 && isdigit(str[0])))
		value = atoi(str.c_str());
	else
		value = str[0];
	std::cout<<"char   : ";
	(isprint(value)) ? std::cout<<"'"<<static_cast<char>(value)<<"'" : std::cout<<"Not dislayed"; std::cout<<"\n";
	std::cout<<"int    : " << value <<std::endl;
	std::cout<<"float  : " <<std::fixed<< static_cast<float>(value) << "f\n";
	std::cout<<"double : " <<std::fixed<<static_cast<double>(value) << "\n";
}

void cast_float(std::string &str)
{
	float value;
	value = std::strtof(str.c_str(),NULL);

	std::cout<<"char   : ";
	(isprint(static_cast<int>(value)))? std::cout<<"'"<<static_cast<char>(value)<<"'" : std::cout<<"Not dislayed"; std::cout<<"\n";
	std::cout<<"int    : " << static_cast<int>(value) <<std::endl;
	std::cout<<"float  : "<<std::fixed<< value << "f\n";
	std::cout<<"double : "<<std::fixed<<static_cast<double>(value) << "\n";
}

void cast_double(std::string &str)
{
	double value;
	value = std::strtod(str.c_str(), NULL);

	std::cout<<"char   : ";
	(isprint(static_cast<int>(value)))? std::cout<<"'"<<static_cast<char>(value)<<"'" : std::cout<<"Not dislayed"; std::cout<<"\n";\
	std::cout<<"int    : " << static_cast<int>(value) <<std::endl;
	std::cout<<"float  : "<<std::fixed<< static_cast<float>(value) << "f\n";
	std::cout<<"double  : "<<std::fixed<< value << "\n";
}

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "invalid number of argument" <<std::endl;
		return 0;
	}
	std::string str = static_cast<std::string>(av[1]);
	if(str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
	{
			std::cout << "char : impossible\n";
			std::cout << "int : impossible\n";
			std::cout << "float :"  << str << "f\n";
			std::cout << "double :" << str << "\n";
			return 0;
	}
	bool validarg = true;
	check_validarg(str, validarg);
	if(validarg)
	{
		if(!is_float(str) && !is_double(str))
			cast_integer(str);
		else if(is_float(str))
			cast_float(str);
		else if(is_double(str))
			cast_double(str);
	}
	else
		std::cout << "please enter valid input\n";
}