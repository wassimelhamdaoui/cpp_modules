/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:51:18 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/29 06:18:37 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Span.hpp"

Span::Span() : n(10){
}

Span::Span(unsigned int const &N) : n(N) {
}

Span::Span(const Span &obj): n(obj.n), vect(obj.vect){
}

Span& Span::operator=(const Span &rhs){
	if(this != &rhs)
	{
		this->n = rhs.n;
		this->vect = rhs.vect;
	}
	return *this;
}

Span::~Span(){
}

void Span::addNumber(int x)
{
	if(this->vect.size() < this->n)
		vect.push_back(x);
	else
		throw ContainerIsFull();
}

unsigned int Span::shortestSpan()
{
	unsigned int shortest = UINT_MAX;
	if(this->vect.size() <= 1)
		throw NotEnough();
	std::sort(vect.begin(), vect.end());
	for(unsigned int i = 1; i < vect.size(); i++)
	{
		if((unsigned int)(vect[i] - vect[i-1]) < shortest)
			shortest = (unsigned int)(vect[i] - vect[i-1]);
	}
	return shortest;
}

unsigned int Span::longestSpan()
{
	if(this->vect.size() <= 1)
		throw NotEnough();
	return (*std::max_element(vect.begin(), vect.end()) - *(std::min_element(vect.begin() ,vect.end())));
}


void Span::addSequence( std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if(std::distance(begin, end) + vect.size() > this->n)
	{
		vect.insert(vect.end(), begin, begin + (n - vect.size()));
		throw ContainerIsFull();
	}
	else
		vect.insert(vect.end(), begin, end);
}

void Span::print_content() const{
	for(size_t i = 0; i < vect.size(); i++)
		std::cout <<"  "<< vect[i];
}