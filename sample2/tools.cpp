#include "tools.hpp"

/**
 * @brief Tools somme
 *
 * @param m_a
 * @param m_b
 *
 * @return double 
 */
double Tools::somme(const double& m_a, const double& m_b)
{
   double result;
   result = m_a + m_b;

   return result; 
} 


/**
 * @brief Tools somme2
 *
 * @param m_a
 * @param m_b
 * @param m_result
 */
void Tools::somme2(const double& m_a, const double& m_b, double* m_result)
{
   *m_result = m_a + m_b;
} 

/**
 * @brief Tools max
 *
 * @param m_a
 * @param m_b
 *
 * @return double 
 */
double Tools::max(const double& m_a, const double& m_b)
{
    double max;

    if(m_a > m_b)
    {
        max = m_a;
    } else 
    {
        max = m_b;
    }
    
    return max;
}


/**
 * @brief Tools max2
 *
 * @param m_a
 * @param m_b
 *
 * @return const double&
 */
const double& Tools::max2(const double* m_a, const double* m_b)
{
    const double* result;
    const double a = *m_a;
    const double b = *m_b;

    if(a > b)
    {
        result = m_a;
    } else 
    {
        result = m_b;
    }

    return *result;
}

