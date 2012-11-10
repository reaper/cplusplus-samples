#ifndef TOOLS_HPP_
#define TOOLS_HPP_

/**
 * @brief Tools class
 */
class Tools 
{
    public:
        inline Tools() {};
        inline ~Tools() {};
        double somme(const double& m_a, const double& m_b);
        void somme2(const double& m_a, const double& m_b, double* m_result);
        double max(const double& m_a, const double& m_b);
        const double& max2(const double* m_a, const double* m_b);
};

#endif //TOOLS_HPP_
