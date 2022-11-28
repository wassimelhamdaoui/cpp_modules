/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 09:12:35 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/27 03:39:39 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T* array;
	public:
		// Constructors
		Array() : _size(0), array(new T[0]) {};
		Array(unsigned int n) : _size(n), array(new T[n]) {};
		Array(const Array& other)
		{
			this->_size = other._size;
			this->array = new T[other._size];
			for (unsigned int i = 0; i < other._size; i++)
				this->array[i] = other.array[i];
		}
	
		~Array()
		{
			delete [] array;
		}
	
		Array& operator=(const Array& rhs)
		{
			if (this != &rhs)
			{
				if(this->array)
					delete [] array;
				this->_size = rhs._size;
				this->array = new T[rhs._size];
				for (unsigned int i = 0; i < rhs._size; i++)
					this->array[i] = rhs.array[i];
			}
			return *this;
		}
	
	
		T& operator[](unsigned int idx)
		{
			if (idx >= this->_size)
				throw OutOfRangeException();
			return this->array[idx];
		}
	
		unsigned int size() const
		{
			return this->_size;
		}
	
		class OutOfRangeException : public std::exception
		{
		public:
			const char* what() const throw()
			{
				return ("Element is out of range of array");
			}
		};
};

#endif