#include "dog.hpp"

/**
 * @brief Dog constructor
 * @param name
 * @param age
 */
Dog::Dog(const std::string& name, int age) : Pet(name, age) {}

/**
 * @brief The dog pees
 * @param place
 */
void Dog::pee(const std::string& place) const {
  std::cout << "The dog named " << getName() << " pees " << place << " !" << std::endl;
}

/**
 * @brief The dog vomit
 * @param place
 */
void Dog::vomit(const std::string& place) const {
  std::cout << "The dog named " << getName() << " vomited " << place << " !" << std::endl;
}
