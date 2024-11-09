// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/18/23
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 11-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "plane.h"

// ========================= YOUR CODE HERE =========================
// This implementation file (plane.cc) is where you should implement
// the member functions declared in the header (plane.h), only
// if you didn't implement them inline within plane.h.
//
Plane::Plane()
    : seat_count_{121}, passenger_count_{121}, destination_{"Fullerton"} {};
Plane::Plane(const int &seat_count, const int &passenger_count,
             const std::string &destination)
    : seat_count_{seat_count},
      passenger_count_{passenger_count},
      destination_{destination} {};
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Plane class.
// ===================================================================