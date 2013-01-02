#include "cat.hpp"

Cat::Cat(std::string name, int age) {
  m_name = name;
  m_age = age;
}

void Cat::pee(std::string place) const {
  std::cout << "The cat named " << m_name << " pees " << place << " !" << std::endl;
}
