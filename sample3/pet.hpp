#ifndef PET_H_
#define PET_H_

#include <iostream>
#include <string>

class Pet {
	protected:
    std::string m_name;
    int m_age;

	public:
    std::string getName() const;
    int getAge() const;
    virtual void pee(std::string place) const = 0;
};

#endif
