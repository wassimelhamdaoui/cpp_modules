/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 06:36:09 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/26 08:55:21 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP
#include<iostream>

template <typename type>
void iter(type array[], size_t lenght, void (*fptr)(type const &t))
{
	for(size_t i = 0; i < lenght; i++)
	{
		fptr(array[i]);
	}
}

template <typename type>
void printer(type &t)
{
	std::cout << t << std::endl;
}

#endif