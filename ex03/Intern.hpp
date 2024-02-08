#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "AForm.hpp"

class Intern
{
    //private attributes
    private :
    
    // public attributes
    public :
    
    //canonical form
    Intern(); /* default constructor */
    Intern(const Intern &p); /*copy constructor*/
    Intern operator=(const Intern &o); /*copy assignement operator*/
    ~Intern(); /* destructor */
    //getters and setters

    //member functions
    AForm *makeForm(std::string name ,std::string target);

};
#endif