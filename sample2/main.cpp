#include <iostream>

/**
 * @brief Somme
 * @param a
 * @param b
 * @return 
 */
double somme(double a, double b)
{
   return a + b; 
} 

/**
 * @brief Somme2
 * @param a
 * @param b
 * @param m_result
 */
void somme_2(double a, double b, double& m_result)
{
   m_result = a + b;
} 

/**
 * @brief Max
 * @param a
 * @param b
 * @return 
 */
double max(double a, double b)
{
    double max;
    max = (a > b) ? a : b;

    return max;
}

/**
 * @brief Max2
 * @param a
 * @param b
 * @return 
 */
double& max_2(double a, double b)
{
    return (a > b) ? a : b;
}

int main () {

    std::cout << "==== Sample 2 ====" << std::endl;
    double a = 12;
    double b = 23;

    double result_somme1 = somme(a, b);
    std::cout << "somme(" << a << ", " << b << ") = " << result_somme1 << std::endl;

    a = 6;
    b = 53;
    double result_somme2;
    somme_2(a, b, result_somme2);
    std::cout << "somme(" << a << ", " << b << ", &result). result = " << result_somme2 << std::endl;

    a = 96;
    b = 138;
    double result_max = max(a, b);
    std::cout << "max(" << a << ", " << b << ") = " << result_max << std::endl;

    a = 376;
    b = 3;
    double& result_max2 = max_2(a, b);
    std::cout << "max(" << a << ", " << b << ") = " << result_max2 << std::endl;

    return 0;
}
