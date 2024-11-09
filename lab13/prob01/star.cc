// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "star.h"

#include <cmath>
#include <iomanip>
#include <iostream>
#include <string>

// ========================= YOUR CODE HERE =========================
// This implementation file (star.cc) is where you should implement
// the member functions declared in the header (star.h), only
// if you didn't implement them inline within star.h.
//
Star::Star() : name_{"alton"}, radius_{69.420} {}

Star::Star(const std::string &name, const double &radius)
    : name_{name}, radius_{radius} {
  std::cout << "The star " << name_ << " was born.\n";
}

Star::~Star() {
  std::cout << "The star " << name_ << " has gone supernova. "
            << "It was " << std::fixed << std::setprecision(2)
            << radius_ * radius_ << " times the volume of our sun.\n";
}
std::string Star::GetName() {
  return name_;
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Star class.
// ===================================================================
