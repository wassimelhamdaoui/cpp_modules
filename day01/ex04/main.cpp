/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 02:46:23 by waelhamd          #+#    #+#             */
/*   Updated: 2022/10/14 07:45:44 by waelhamd         ###   ########.fr       */
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
// 	{
// 		file << "test test test test" << std::endl;
// 	}
// 	file.close();
// 	std::ifstream filename("test.txt");//when you need to reading from files it will not be created if it doesn't exist

// 	return 0;
// }


int main(int ac, char **av)
{
	if(ac != 4)
		std::cout << "./replace <filename> <string 1> <string 2>" << std::endl; return 0;
	std::string file = av[1];
	std::ifstream filename(file);
	if(!filename.is_open())
		std::cerr << "failed to open :" << file << std::endl; return 1;
	
	
}