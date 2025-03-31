#include "matrix.hpp"
#include <iostream>

int main(int argc, char *argv[]) 
{
    Matrix A = Matrix(4);
    A.print_matrix();
    int b = A.get_value(0, 0);

    std::cout << b << std::endl;

    A.set_value(0, 0, 5);

    int d = A.get_value(0, 0);
    std::cout << d << std::endl;
    return 0;
}
