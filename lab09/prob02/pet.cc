// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/4/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 9-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "pet.h"

#include <iomanip>
#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file (pet.cc) is where you should implement
// the member functions declared in the header (pet.h), only
// if you didn't implement them inline within pet.h.
//
Pet::Pet() : name_{"Doug"}, weight_{15.6} {};

Pet::Pet(const std::string &name, const Breed &breedtype, const double &weight)
    : name_{name}, breed_{breedtype}, weight_{weight} {};

Pet::Pet(const std::string &name, const std::string &species,
         const std::string &breedname, const std::string &color,
         const double &weight)
    : name_{name}, breed_{species, breedname, color}, weight_{weight} {};
std::string Pet::Name() {
  return name_;
};
void Pet::SetName(const std::string &name) {
  name_ = name;
};
Breed Pet::GetBreed() {
  return breed_;
};
void Pet::SetBreed(const Breed &breed) {
  breed_ = breed;
};
void Pet::SetBreed(const std::string &species, const std::string &breed_name,
                   const std::string &color) {
  breed_.SetBreedName(breed_name);
  breed_.SetSpecies(species);
  breed_.SetColor(color);
};

double Pet::Weight() const {
  return weight_;
};
void Pet::SetWeight(const double &weight) {
  weight_ = weight;
}
void Pet::Print() const {
  std::cout << "Name: " << name_ << "\n";
  std::cout << "Species: " << breed_.Species() << "\n";
  std::cout << "Breed: " << breed_.BreedName() << "\n";
  std::cout << "Color: " << breed_.Color() << "\n";
  std::cout << "Weight: " << weight_ << " lbs";
}
// Pet::Pet(std::string name, Breed breedtype, double weight) : name_{name},
// weight
//  Remember to specify the name of the class with :: in this format:
//      <return type> MyClassName::MyFunction() {
//         ...
//      }
//  to tell the compiler that each function belongs to the Pet class.
//  ===================================================================