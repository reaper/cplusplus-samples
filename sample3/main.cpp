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
  std::vector<Pet*> pets;

  // Insert cats and the dog into the vector
  pets.reserve(3);
  pets.push_back(&cat_jc);
  pets.push_back(&cat_jp);
  pets.push_back(&dog_h);

  for (std::vector<Pet*>::const_iterator pets_it = pets.begin(); pets_it != pets.end(); ++pets_it) {
    // Use the dynamic cast
    Cat *cat = dynamic_cast<Cat*>(*pets_it);
    Dog *dog = dynamic_cast<Dog*>(*pets_it);

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
