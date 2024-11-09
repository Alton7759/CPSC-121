// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <string>

#include "cpputils/graphics/image.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef ASTRONAUT_H
#define ASTRONAUT_H

// ========================= YOUR CODE HERE =========================
// Define the Astronaut class here. Refer to the README for instructions.
class Astronaut {
 private:
  std::string name_;
  graphics::Color main_color_;

 public:
  Astronaut(const std::string &name, const graphics::Color &color);
  ~Astronaut();

  std::string GetName() const;
  graphics::Color GetColor() const;
  std::string GetIconFilename() const;
  //^^^^^^^^^^^^^^^^^^^^^^return "astronaut.bmp"
};
// ===================================================================

#endif  // ASTRONAUT_H
