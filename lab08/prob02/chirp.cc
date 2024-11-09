// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/23/23
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 8-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "chirp.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (chirp.cc) is where you should implement
// the member functions declared in the header (chirp.h), only
// if you didn't implement them inline within chirp.h:
//   1. SetMessage
//   2. GetMessage
//   3. The two AddLike member function overloads.
//   4. GetLikes
//   5. The three Chirp constructor overloads.
//
Chirp::Chirp() : message_{""}, num_likes_{0} {};

Chirp::Chirp(const std::string &message) : message_{message}, num_likes_{0} {};

Chirp::Chirp(const std::string &message, const int &like_count)
    : message_{message}, num_likes_{like_count} {};

void Chirp::SetMessage(const std::string &message) {
  message_ = message;
}

int Chirp::GetLikes() const {
  return num_likes_;
}

void Chirp::AddLike() {
  num_likes_ += 1;
}

void Chirp::AddLike(const int &num) {
  num_likes_ += num;
}

std::string Chirp::GetMessage() const {
  return message_;
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Chirp class.
// ===================================================================