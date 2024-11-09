// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "astronaut.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
Astronaut::Astronaut(const std::string &name, const graphics::Color &color)
    : name_{name}, main_color_{color} {}
Astronaut::~Astronaut() = default;

std::string Astronaut::GetName() const {
  return name_;
}
graphics::Color Astronaut::GetColor() const {
  return main_color_;
}
std::string Astronaut::GetIconFilename() const {
  return "astronaut.bmp";
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Astronaut class.
// ===================================================================