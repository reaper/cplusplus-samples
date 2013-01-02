#ifndef DOG_H_
#define DOG_H_

#include "pet.hpp"

class Dog : public Pet {
	public:
    Dog();
    Dog(std::string name, int age);
    void pee(std::string place) const;
    void vomit(std::string place) const;
};

#endif
