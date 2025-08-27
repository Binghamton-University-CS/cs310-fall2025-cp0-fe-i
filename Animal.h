#ifndef ANIMAL_H
#define ANIMAL_H
class Animal {
   public:
      Animal(std::string speciesName, unsigned int discoveryYear);

      Animal() : species(""), year_discovered(0) {};

      void display();

   private:
      std::string species = "";
      unsigned int year_discovered = 0;
};
#endif
