// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "crewmate.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
Crewmate::Crewmate() : Astronaut{"no name", graphics::Color(0, 0, 0)} {}
Crewmate::Crewmate(const std::string &name, const graphics::Color &color)
    : Astronaut{name, color} {}
Crewmate::~Crewmate() = default;

bool Crewmate::GetIsAlive() const {
  return is_alive_;
}
int Crewmate::GetTaskCount() const {
  return task_count_;
}
graphics::Color Crewmate::GetColor() const {
  if (GetIsAlive()) {
    return Astronaut::GetColor();
  } else {
    graphics::Color shifted((Astronaut::GetColor().Red() + 256) / 2,
                            (Astronaut::GetColor().Green() + 256) / 2,
                            (Astronaut::GetColor().Blue() + 256) / 2);
    return shifted;
  }
}
std::string Crewmate::GetIconFilename() const {
  if (GetIsAlive()) {
    return Astronaut::GetIconFilename();
  } else {
    return "ghost.bmp";
  }
}

void Crewmate::SetIsAlive(const bool &isalive) {
  is_alive_ = isalive;
}

void Crewmate::DoTask(const std::string &taskname) {
  task_count_++;
  std::cout << this->GetName() << " is doing " << taskname << "\n";
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Crewmate class.
// ===================================================================