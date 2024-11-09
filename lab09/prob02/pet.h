// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/4/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 9-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#include "breed.h"
// ======================= YOUR CODE HERE =======================
// Write the Pet class here. Refer to the README for the member
// variables, constructors, and member functions needed.
class Pet {
 private:
  std::string name_;
  Breed breed_;
  double weight_;

 public:
  Pet();
  Pet(const std::string &name, const Breed &breedtype, const double &weight);
  Pet(const std::string &name, const std::string &species,
      const std::string &breedname, const std::string &color,
      const double &weight);
  std::string Name();
  void SetName(const std::string &name);
  Breed GetBreed();
  void SetBreed(const Breed &breed);
  void SetBreed(const std::string &species, const std::string &breed_name,
                const std::string &color);

  double Weight() const;
  void SetWeight(const double &weight);
  void Print() const;
};

// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference when appropriate.
// Remember that std::string is an object!
// ===============================================================