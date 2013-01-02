#ifndef CAT_H_
#define CAT_H_

#include "pet.hpp"

class Cat : public Pet {
	public:
    Cat();
    Cat(std::string name, int age);
    void pee(std::string place) const;
};

#endif
