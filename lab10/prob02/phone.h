// Alton Bonilla
// 121L-15 (e.g. CPSC 121L-01)
// 4/12/23
// alton77@csu.fullerton.edu email
// @alton7759
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @Ahan003, @eduardo-lara0616

#pragma once

#include <iostream>
#include <memory>
#include <vector>

#include "message.h"

class Phone {
  // ======================= YOUR CODE HERE =======================
  // Write the Phone class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
 public:
  Phone();
  Phone(const std::string &owner);
  std::string GetOwner() const;
  std::shared_ptr<Message> AuthorMessage(const std::string &word);
  void AcceptMessage(const std::shared_ptr<Message> &message);
  void PrintMessages();

 private:
  std::string owner_;
  std::vector<std::shared_ptr<Message>> messages_;
  //
  // Select one among you and your lab partner to be the "driver"
  // and the other to be the "navigator". The driver should write
  // the code, while the navigator reviews the code. Both of you
  // should communicate and share thoughts as you go along.
  // ===============================================================
};