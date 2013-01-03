#include "cat.hpp"

/**
 * @brief Cat constructor
 * @param name
 * @param age
 */
Cat::Cat(const std::string& name, int age) : Pet(name, age) {}

/**
 * @brief The cat pees
 * @param place
 */
void Cat::pee(const std::string& place) const {
  std::cout << "The cat named " << getName() << " pees " << place << " !" << std::endl;
}
