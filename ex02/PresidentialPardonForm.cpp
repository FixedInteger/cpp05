#include "PresidentialPardonForm.hpp"

//default constructor
PresidentialPardonForm ::PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm",25,5)
{
	this->target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
 // inform the target that he has been pardonned
	std::cout << executor.getName() << "has been  pardonned  by Zaphod Beeblbrox" << std::endl; 
}
//default destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called"<< std::endl;

}