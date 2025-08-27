#include "Animal.h"

#ifndef ANIMALSINZOO_H
#define ANIMALSINZOO_H
class AnimalsInZoo {
   public:
      AnimalsInZoo(Animal animal);

      AnimalsInZoo() : numAnimals(0) {};

      void display();

   private:
      unsigned int numAnimals = 0;
      Animal animal;
};
#endif
