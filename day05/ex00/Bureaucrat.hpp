#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

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
		void decrement();
		void increment();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

};

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif 