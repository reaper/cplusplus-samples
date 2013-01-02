#include "pet.hpp"

/**
 * @brief Get pet's name
 * @return 
 */
std::string Pet::getName() const {
  return m_name;
}

/**
 * @brief Get pet's age
 * @return 
 */
int Pet::getAge() const {
  return m_age;
}
