#include "dog.hpp"

/**
 * @brief Dog constructor
 * @param name
 * @param age
 */
Dog::Dog(std::string name, int age) {
  m_name = name;
  m_age = age;
}

/**
 * @brief The dog pees
 * @param place
 */
void Dog::pee(std::string place) const {
  std::cout << "The dog named " << m_name << " pees " << place << " !" << std::endl;
}

/**
 * @brief The dog vomit
 * @param place
 */
void Dog::vomit(std::string place) const {
  std::cout << "The dog named " << m_name << " vomited " << place << " !" << std::endl;
}
