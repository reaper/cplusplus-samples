#ifndef PET_HPP_
#define PET_HPP_

#include <iostream>
#include <string>

class Pet {

private:
    std::string m_name;
    int m_age;

protected:
    Pet(const std::string& name, int age);

public:
    std::string getName() const;
    int getAge() const;
    virtual void pee(const std::string& place) const = 0;
};

#endif
