#include <iostream>
#include "Animal.h"

Animal::Animal(std::string speciesName, unsigned int discoveryYear) {
   species = speciesName;
   year_discovered = discoveryYear;
}

void Animal::display() {
   std::cout << species << " [" << year_discovered << "]" << std::endl;
}
