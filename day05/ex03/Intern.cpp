#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- METHODS ----------------------------------
*/

AForm* Intern::makeForm(const std::string& formName, const std::string& target) const
{
	std::string formlist[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i;
	for (i = 0; i < 3 && formlist[i] != formName; i++);
	
	AForm *tmp = NULL;
	switch (i)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			break;
		case 1:
			tmp = new RobotomyRequestForm(target);
			break;
		case 2:
			tmp = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidFormException();
	}
	std::cout << "intern creates " << formName << std::endl;
	return tmp;
}