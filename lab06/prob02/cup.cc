// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/5/23
// Alton77@csu.fullerton.edu 
// Alton7759
//
// Lab 6-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "cup.h"

#include <iostream>

Cup::Cup(const std::string &drink_name, const double &amount) {
  drink_type_ = drink_name;
  fluid_oz_ = amount;
}
Cup::Cup() {
  drink_type_ = "Water";
  fluid_oz_ = 16;
}
void Cup::SetDrink(const std::string &drink_name) {
  drink_type_ = drink_name;
}
void Cup::SetOZ(const double &amount) {
  fluid_oz_ = amount;
}
void Cup::Drink(const double &amount) {
  fluid_oz_ = fluid_oz_ - amount;
  if (fluid_oz_ < 0) {
    fluid_oz_ = 0;
  }
}
void Cup::Refill(const double &amount) {
  fluid_oz_ += amount;
}
void Cup::Empty() {
  fluid_oz_ = 0;
  drink_type_ = "nothing";
}
void Cup::NewDrink(const std::string &drink_name, const double &amount) {
  drink_type_ = drink_name;
  fluid_oz_ = amount;
}
double Cup::GetFluidOz() const {
  return fluid_oz_;
}
std::string Cup::GetDrinkType() const {
  return drink_type_;
}