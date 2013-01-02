#include "dog.hpp"

Dog::Dog(std::string name, int age) {
  m_name = name;
  m_age = age;
}

void Dog::pee(std::string place) const {
  std::cout << "The dog named " << m_name << " pees " << place << " !" << std::endl;
}

void Dog::vomit(std::string place) const {
  std::cout << "The dog named " << m_name << " vomited " << place << " !" << std::endl;
}
