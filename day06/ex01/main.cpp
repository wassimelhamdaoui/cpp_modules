/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:28:37 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/25 07:24:07 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Data.hpp"

int main()
{
	Data ptr;
	ptr.age = 26;
	ptr.name = "wassim";
	ptr.sold = 100.2;
	std::cout << ptr.age<<" "<<ptr.name<<" "<<ptr.sold<<std::endl;
	
	uintptr_t raw = serialize(&ptr);

	Data *output = deserialize(raw);
	std::cout<<"-----------------------------"<<std::endl; 

	std::cout <<output->age << " "<<output->name<<" "<<output->sold << std::endl;
}