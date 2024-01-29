#include "Bureaucrat.hpp"
#include "Form.hpp"


int main(int ac , char **av)
{
    Bureaucrat b("b", 1);
    Form f("f", 1, 1);
    std::cout << b << std::endl;
    std::cout << f << std::endl;
    b.SignForm(f);
    std::cout << f << std::endl;
    return (0);
}