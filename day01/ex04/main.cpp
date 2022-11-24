/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:46:23 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/10 04:22:34 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<fstream>
#include<string.h>


/*
ofstream= the output file stream used to create file & write to files.

ifstream= the input file stream used to read information from files

fstream= the file stream generally,= ofstream + ifstream it can creat read and write to file
*/

// int main()
// {
// 	//if you want read from file you need to make an input file stream object
// 	std::ofstream file("test.txt");
// 	if(!file.is_open())
// 		exit(0);

// 	for(int i = 0; i < 10 ; i++)
//
// 		file << "test test test test" << std::endl;
// 	}
// 	file.close();'\0'
// 	std::ifstream filename("test.txt");//when you need to reading from files it will not be created if it doesn't exist

// 	return 0;
// }






int main(int ac, char **av)
{
	if(ac != 4)
	{
		std::cout << "./replace <filename> <string 1> <string 2>" << std::endl;
		return 0;
	}
	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if(s1.empty()){
		std::cout << "string 1: is empty" << std::endl;
		return 1;
	}
	std::ifstream filename(file);
	if(!filename.is_open())
	{
		std::cout << "failed to open :" << file << std::endl;
		 return 1;
	}
// read from filename to buffer
	std::string buffer;
	if(filename.good()){
		std::getline(filename, buffer, '\0');
	}
	size_t pos;
	std::string save;
	while((pos = buffer.find(s1))!= std::string::npos && s1 != s2)
	{
		buffer = buffer.substr(0, pos) + s2 + buffer.substr(pos+s1.length(), buffer.length());
		save += buffer.substr(0, pos) + s2;
		buffer = buffer.substr(pos + s2.length(), buffer.length());
	}
	save +=buffer;
	
	//write buffer to file .replace
	std::ofstream _outfile(file + ".replace");
	// if(!_outfile.is_open())
	// {
	// 	std::cout << "can't open or create "<< file <<std::endl;
	// 	 return 1;
	// }
	_outfile << save;
	_outfile.close();
	filename.close();
	return 0;
}