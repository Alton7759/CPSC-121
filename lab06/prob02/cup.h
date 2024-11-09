// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/5/23
// Alton77@csu.fullerton.edu 
// Alton7759
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

class Cup {
 public:
  Cup();
  Cup(const std::string &drink_name, const double &amount);
  void SetDrink(const std::string &drink_name);
  void SetOZ(const double &amount);
  void Drink(const double &amount);
  void Refill(const double &amount);
  void Empty();
  void NewDrink(const std::string &drink_name, const double &amount);
  double GetFluidOz() const;
  std::string GetDrinkType() const;

 private:
  std::string drink_type_ = "pog";
  double fluid_oz_ = 0.0;
};
