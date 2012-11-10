#include <iostream>
#include "tools.hpp"

int main () {

    std::cout << "==== Sample 2 ====" << std::endl;
    double a = 12;
    double b = 23;
    Tools t;

    double result_somme1 = t.somme(a, b);
    std::cout << "somme(" << a << ", " << b << ") = " << result_somme1 << std::endl;

    a = 6;
    b = 53;
    double result_somme2;
    t.somme2(a, b, &result_somme2);
    std::cout << "somme(" << a << ", " << b << ", &result). result = " << result_somme2 << std::endl;

    a = 96;
    b = 138;
    double result_max = t.max(a, b);
    std::cout << "max(" << a << ", " << b << ") = " << result_max << std::endl;

    a = 376;
    b = 3;
    const double& result_max2 = t.max2(&a, &b);
    std::cout << "max(" << a << ", " << b << ") = " << result_max2 << std::endl;

	return 0;
}
