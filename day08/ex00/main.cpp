/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:40:52 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/28 13:38:05 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"easyfind.hpp"
#include<vector>
#include<list>

/*
STL = standard template library

a container is a holder object that stores a collection of other object,
->they are implement as class templates which allows flexibility in the types supported as elements;
->manages the storage space for its elements
->provides member function to access them either directly or through iterator

iterator(referanc objects with simelasr properities to pointers)

sequence containers :
-array(static contigous array)
-vector(dynamic contiguous array)
-deque(double ended queue)
-forward list(singly linked list)
-list (doubly linked list)

associative containers :
sorted data structures that can be quickly searched
-set
-map
-multiset
-multimap

container adapters :
					provide a different interface for sequential containers
	-stack (adapts a container to provide stack(LIFO data structure)
	-queue (adapts a container to provide queue (FIFO dato structure))


VECTOR :
	begin()-return an iterator pointing to the first element in the vector;
	end()  -return an iterator pointing to the theoretical element that follow the last element
	rbegin()- ret a reverse iterator pointing  to the last elment it move from last to end
	rend()- considered as reverse end

Deque :
	A queue data structure allows insertion only at the end and deletion from the front.
	This is like a queue in real life
*/




int main()
{
	std::vector<int> vect;
	vect.push_back(10);
	vect.push_back(20);
	try
	{
		std::cout<<easyfind(vect, 10)<<'\n';
		std::cout<<easyfind(vect, 30)<<'\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::list<int> t_list;
	t_list.push_back(22);
	t_list.push_back(11);
	try
	{
		std::cout<<easyfind(t_list, 22)<<'\n';
		std::cout<<easyfind(t_list, 33)<<'\n';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}