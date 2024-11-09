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

// These header guards are necessary to keep your class from being defined
// multiple times when it is included from multiple files.
#ifndef CREWMATE_H
#define CREWMATE_H

// ========================= YOUR CODE HERE =========================
// Define the Crewmate class here, which inherits from the Astronaut
class Crewmate : public Astronaut {
 private:
  bool is_alive_ = true;
  int task_count_ = 0;

 public:
  Crewmate();
  Crewmate(const std::string &name, const graphics::Color &color);
  ~Crewmate();

  bool GetIsAlive() const;
  int GetTaskCount() const;
  graphics::Color GetColor() const;
  std::string GetIconFilename() const;

  void SetIsAlive(const bool &isalive);

  void DoTask(const std::string &taskname);
};

// base class. Refer to the README for instructions.
// ===================================================================

#endif  // CREWMATE_H
