#include "GuassEquation.h"
#include <vector>
#include <iostream>

int main(int argc, char** argv)
{
    double matrixA[3][3] = { {2.5, 2.3, -5.1}, {5.3, 9.6, 1.5}, {8.1, 1.7, -4.3} };
    double b[3] = {3.7, 3.8, 5.5 };

    std::vector<double> R(3);
    GuassEquation equation(3, (double *)matrixA, b);
    equation.Resolve(R);
    std::cout << "R: " << "\n";
    for (const auto r : R)
        std::cout << "  " << r << std::endl;
    return 0;
}
