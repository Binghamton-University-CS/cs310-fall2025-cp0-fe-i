#include "Animal.h"

#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal animal);

      AnimalsInZoo();

      void display();
   private:
      int numAnimals;
      Animal animal;
};
#endif
