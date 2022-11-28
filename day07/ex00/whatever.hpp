/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 00:32:42 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/26 06:27:10 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include<iostream>

template <typename T>
void swap(T &ptr1, T &ptr2)
{
	T save;
	
	save = ptr1;
	ptr1 = ptr2;
	ptr2 = save;
}

template <typename T>
T min(T &a, T &b)
{
	if(a > b)
		return b;
	return a;
}

template <typename T>
T max(T &a, T &b)
{
	if(a > b)
		return a;
	return b;
}

#endif