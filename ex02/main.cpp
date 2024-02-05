#include "Bureaucrat.hpp"
// void leaks()
// {
//     system("leaks ex02");
// } 
int main(int ac , char **av)
{
    // std::atexit(leaks);
    (void)ac;
    (void)av;
    Bureaucrat *b = new Bureaucrat("bureaucrat", 150);
    
    std::cout << *b;
    delete b;
    return 0;
}