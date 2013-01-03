#ifndef DOG_HPP_
#define DOG_HPP_

#include "pet.hpp"

class Dog : public Pet {
public:
    Dog(const std::string& name, int age);
    void pee(const std::string& place) const;
    void vomit(const std::string& place) const;
};

#endif
