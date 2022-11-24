#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
#include"AForm.hpp"


class Intern
{

	public:

		Intern();
		~Intern();

		class InvalidFormException : public std::exception
        {
        public:
                const char* what() const throw()
                {
                        return ("invalid form type");
                }
        };
		AForm* makeForm(const std::string& formName, const std::string& target) const;
};


#endif