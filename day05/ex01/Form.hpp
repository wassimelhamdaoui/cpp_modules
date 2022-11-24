/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:26:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/20 19:46:42 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include"Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class Form
{
	private:
		const std::string  name;
		bool _signe;
		const int  grade_signe;
		const int  grade_exec;

	public:

		Form();
		Form(std::string _name, int const _grade_signe, int const _grade_exec);
		Form( Form const & src );
		~Form();
		
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getName() const;
		bool getSigne() const;

		void beSigned(Bureaucrat &candidat);
		
		class GradeTooHighException : public std::exception
		{
			public:
				const char * what() const throw()
				{
					return "Grade Too High !!";
				}
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char *what() const throw()
				{
					return "Grade Too Low";
				}
		};

		Form &		operator=( Form const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif