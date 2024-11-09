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

#include <map>
#include <memory>

#include "message.h"
#include "phone.h"

class Network {
 public:
  Network();
  void AddPhone(const std::shared_ptr<Phone> &phone);
  void SendMessage(std::shared_ptr<Message> message,
                   const std::string &receiver);
  void SendMessage(const std::shared_ptr<Message> &message,
                   const std::vector<std::string> &receivers);
  bool CheckPhonebook(const std::string &receiver);

 private:
  std::map<std::string, std::shared_ptr<Phone>> phonebook_;
  // ======================= YOUR CODE HERE =======================
  // Write the Network class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // If you were the "driver" for the Phone class, then switch roles
  // with your lab partner and act as the "navigator" for this class.
  // ===============================================================
};