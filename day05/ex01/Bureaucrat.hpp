/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 19:05:25 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/20 19:15:09 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include"Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw();
		};

		Bureaucrat();
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		const std::string getName() const;
		int getGrade() const;

		void signForm(Form& form);
		void decrement();
		void increment();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif 