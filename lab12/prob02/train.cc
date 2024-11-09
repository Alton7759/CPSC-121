// Alton Bonilla
// CPSC 121L-15
// 4/26/23
// alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater
#include "train.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file (train.cc) is where you should implement
// the member functions declared in the header (train.h), only
// if you didn't implement them inline within train.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
int Train::TotalTrainPassengers() {
  if (next_carriage_ != nullptr) {
    return passenger_count_ + next_carriage_->TotalTrainPassengers();
  }
  return passenger_count_;
}
int Train::MaxCarriagePassengers() {
  if (next_carriage_ != nullptr) {
    if (seat_count_ < next_carriage_->MaxCarriagePassengers()) {
      return next_carriage_->MaxCarriagePassengers();
    } else {
      return seat_count_;
    }
  }
  return seat_count_;
}
bool Train::IsTrainFull() {
  return MaxCarriagePassengers() <= TotalTrainPassengers();
}
void Train::AddCarriageToEnd(const std::shared_ptr<Train> &newpart) {
  if (next_carriage_ != nullptr) {
    next_carriage_->AddCarriageToEnd(newpart);
  }
  next_carriage_ = newpart;
}
// to tell the compiler that each function belongs to the Train class.
// ===================================================================