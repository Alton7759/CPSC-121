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
#include "crewmate.h"

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef IMPOSTOR_H
#define IMPOSTOR_H

// ========================= YOUR CODE HERE =========================
// Define the Impostor class here, which inherits from the Astronaut
// base class. Refer to the README for instructions.
class Impostor : public Astronaut {
 private:
 public:
  Impostor();
  Impostor(const std::string &name, const graphics::Color &color);
  ~Impostor();

  void Kill(Crewmate &crewmate);
};

// ===================================================================

#endif  // IMPOSTOR_H
