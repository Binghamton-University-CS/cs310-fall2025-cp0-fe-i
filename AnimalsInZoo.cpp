#include <iostream>
#include "Animal.h"
#include "AnimalsInZoo.h"

AnimalsInZoo::AnimalsInZoo(Animal animal1) {
   animal = animal1;
   numAnimals = 1;
}

AnimalsInZoo::AnimalsInZoo() {
   numAnimals = 0;
}

void AnimalsInZoo::display() {
   std::cout << numAnimals << std::endl;
   if (numAnimals == 1) animal.display();
}
