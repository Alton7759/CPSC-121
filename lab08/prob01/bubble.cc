// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/23/23
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "bubble.h"

#include <cmath>
#include <iostream>
// ========================= YOUR CODE HERE =========================
// This implementation file (bubble.cc) is where you should implement
// the member functions declared in the header (bubble.h), only
// if you didn't implement them inline within bubble.h:
//   1. GetRadius
//   2. SetRadius
//   3. CalculateVolume
Bubble::Bubble() : radius1_{0} {};

Bubble::Bubble(const double &radius1) : radius1_{radius1} {};

double Bubble::GetRadius() const {
  return radius1_;
};

void Bubble::SetRadius(const double &radius1) {
  radius1_ = radius1;
};

double Bubble::CalculateVolume() const {
  double test{1.333333333333333333333333333333333333333333 * 3.1415 *
              pow(radius1_, 3)};
  return test;
};

Bubble CombineBubbles(const Bubble &bubble1, const Bubble &bubble2) {
  double radi = bubble1.GetRadius() + bubble2.GetRadius();
  Bubble combine{radi};
  return combine;
};
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Bubble class.
// ===================================================================

// ========================= YOUR CODE HERE =========================
// Implement the CombineBubbles function you declared in bubble.h
//
// Since CombineBubbles is NOT in the Bubble class, you should not
// specify the name of the class with the :: format.
// ==================================================================