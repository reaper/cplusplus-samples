#ifndef CAT_HPP_
#define CAT_HPP_

#include "pet.hpp"

class Cat : public Pet {
public:
    Cat(const std::string& name, int age);
    void pee(const std::string& place) const;
};

#endif
