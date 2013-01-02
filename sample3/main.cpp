#include <vector>
#include "cat.hpp"
#include "dog.hpp"

int main () {
  // Cat and dog instantiations
  Cat cat_jc("Jean-Claude", 14);
  Cat cat_jp("Jean-Pierre", 9);
  Dog dog_h("Helios", 1);

  // Vector instantiation
  // & iterator
  std::vector<Pet*> list;
  std::vector<Pet*>::const_iterator i;

  // Insert cats and the dog into the vector
  list.reserve(3);
  list.push_back(&cat_jc);
  list.push_back(&cat_jp);
  list.push_back(&dog_h);

  for (i = list.begin(); i != list.end(); ++i) {
    // Use the dynamic cast
    Cat *cat = dynamic_cast<Cat*>(*i);
    Dog *dog = dynamic_cast<Dog*>(*i);

    if (cat) {
      cat->pee("outside");
    }

    if (dog) {
      dog->pee("on the home's room floor");
      dog->vomit("on the home's kitchen floor");
    }
  }

  return 0;
}
