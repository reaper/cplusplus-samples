#include "cat.hpp"

/**
 * @brief Cat constructor
 * @param name
 * @param age
 */
Cat::Cat(std::string name, int age) {
  m_name = name;
  m_age = age;
}

/**
 * @brief The cat pees
 * @param place
 */
void Cat::pee(std::string place) const {
  std::cout << "The cat named " << m_name << " pees " << place << " !" << std::endl;
}
