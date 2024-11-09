// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "impostor.h"

#include <iostream>

#include "crewmate.h"

// ========================= YOUR CODE HERE =========================
// This implementation file is where you should implement the member
// functions declared in the header, only if you didn't implement
// them inline in the header.
//
Impostor::Impostor() : Astronaut{"Alton", graphics::Color(69, 42, 77)} {}
Impostor::Impostor(const std::string &name, const graphics::Color &color)
    : Astronaut{name, color} {}
Impostor::~Impostor() = default;

void Impostor::Kill(Crewmate &crewmate) {
  crewmate.SetIsAlive(false);
  std::cout << Astronaut::GetName() << " killed " << crewmate.GetName();
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Impostor class.
// ===================================================================