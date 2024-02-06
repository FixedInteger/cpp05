#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>
// void leaks()
// {
//     system("leaks ex02");
// } 
int main(int ac , char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./ex02 [filename]" << std::endl;
        return (1);
    }
    Bureaucrat b("bureaucrat", 1);
    ShrubberyCreationForm f(av[1]);
    b.SignForm(f);
    b.executeForm(f);

    Bureaucrat b2("bureaucrat2", 150);
    RobotomyRequestForm f2(av[1]);
    b2.SignForm(f2);
    b2.executeForm(f2);
   

    return (0);
}