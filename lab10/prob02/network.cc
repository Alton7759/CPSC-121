// Alton Bonilla
// 121L-15 (e.g. CPSC 121L-01)
// 4/12/23
// alton77@csu.fullerton.edu email
// @alton7759
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @Ahan003, @eduardo-lara0616
#include "network.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (network.cc) is where you should implement
// the member functions declared in the header (network.h), only
// if you didn't implement them inline within network.h.
//
Network::Network() = default;
void Network::AddPhone(const std::shared_ptr<Phone> &phone) {
  phonebook_.insert({phone->GetOwner(), phone});
};
void Network::SendMessage(std::shared_ptr<Message> message,
                          const std::string &receiver) {
  if (CheckPhonebook(receiver)) {
    phonebook_.at(receiver)->AcceptMessage(message);
  }
};
void Network::SendMessage(const std::shared_ptr<Message> &message,
                          const std::vector<std::string> &receivers) {
  for (const auto &receiver : receivers) {
    if (CheckPhonebook(receiver)) {
      SendMessage(message, receiver);
    }
  }
};

bool Network::CheckPhonebook(const std::string &receiver) {
  auto search = phonebook_.find(receiver);
  return search != phonebook_.end();
  // checks to see if someone is in the phone book
};
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Network class.
// ===================================================================