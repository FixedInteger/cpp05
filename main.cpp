#include "Bureaucrat.hpp"
int main(int ac , char **av)
{
    if (ac != 2)
    {
        std::cout << "Usage: ./a.out <grade>" << std::endl;
        return (1);
    }
    try
    {
        Bureaucrat b("bureaucrat", std::atoi(av[1]));
        std::cout << b<< std::endl;
        b.incrementGrade(); 
        std::cout << b<< std::endl;
        b.decrementGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}