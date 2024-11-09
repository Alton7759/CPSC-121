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
// ======================= YOUR CODE HERE =======================
// Write the Breed class here. Refer to the README for the member
// variables, constructors, and member functions needed.
class Breed {
 private:
  std::string species_;
  std::string breed_name_;
  std::string color_;

 public:
  Breed() : species_{"Dog"}, breed_name_{"Pug"}, color_{"Fawn"} {};
  Breed(const std::string &species, const std::string &breedname,
        const std::string &color)
      : species_{species}, breed_name_{breedname}, color_{color} {};
  std::string Species() const {
    return species_;
  };
  void SetSpecies(std::string species) {
    species_ = std::move(species);
  };
  std::string BreedName() const {
    return breed_name_;
  };
  void SetBreedName(std::string breedname) {
    breed_name_ = std::move(breedname);
  };
  std::string Color() const {
    return color_;
  };
  void SetColor(std::string color) {
    color_ = std::move(color);
  };
};
// Note: you may define all functions inline in this file.
// ===============================================================