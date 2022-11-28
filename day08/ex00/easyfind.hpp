/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:41:20 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/28 13:26:25 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<algorithm>

template <typename T>
int easyfind(T &container, int i)
{
	typename T::iterator it;

	it = std::find(container.begin(), container.end(), i);
	if(it == container.end())
		throw std::exception();
	return *it;
}

#endif