/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:51:36 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/29 05:46:17 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include<vector>
#include<iostream>
#include<algorithm>
#include<exception>
#include<iterator>

class Span
{
	private:
		unsigned int n;
		std::vector<int> vect;
	public :
		//constractor
		Span();
		Span(const unsigned int &N);
		Span(const Span &obj);
		Span& operator=(const Span &rhs);
		~Span();
		
		void addNumber(int x);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		void addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end);
		void print_content() const;

		//exeption
		class ContainerIsFull : public std::exception{
			public :
				const char* what() const throw(){
					return "container is full";
				}
		};
		class NotEnough : public std::exception{
			public :
				const char* what() const throw(){
					return "not enough argument";
				}		
		};
};

#endif