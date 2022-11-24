/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waelhamd <waelhamd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 21:26:07 by waelhamd          #+#    #+#             */
/*   Updated: 2022/11/20 21:23:57 by waelhamd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include"Bureaucrat.hpp"
# include <iostream>
# include <string>

class Bureaucrat;

class AForm
{
	private:
		const std::string  name;
		bool _signe;
		const int  grade_signe;
		const int  grade_exec;

	public:

		AForm();
		AForm(std::string _name, int const _grade_signe, int const _grade_exec);
		AForm( AForm const & src );
		virtual ~AForm();
		
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getName() const;
		bool getSigne() const;
		void setSigne(bool _signe);

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
		class FormNotSignedException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return ("form is not signed");
				}
		};

		void execute(Bureaucrat const & executor) const;
		virtual void Action() const = 0;
		AForm &		operator=( AForm const & rhs );

};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif