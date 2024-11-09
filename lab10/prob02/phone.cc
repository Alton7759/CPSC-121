// Alton Bonilla
// 121L-15 (e.g. CPSC 121L-01)
// 4/12/23
// alton77@csu.fullerton.edu email
// @alton7759
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @Ahan003, @eduardo-lara0616
#include "phone.h"
// ========================= YOUR CODE HERE =========================
// This implementation file (phone.cc) is where you should implement
// the member functions declared in the header (phone.h), only
// if you didn't implement them inline within phone.h.
Phone::Phone() : owner_{"alton"} {};
Phone::Phone(const std::string &owner) : owner_{owner} {};
std::string Phone::GetOwner() const {
  return owner_;
};
std::shared_ptr<Message> Phone::AuthorMessage(const std::string &word) {
  Message author{word, owner_};
  std::shared_ptr<Message> words = std::make_shared<Message>(author);
  return words;
}
void Phone::AcceptMessage(const std::shared_ptr<Message> &message) {
  messages_.push_back(message);
};
void Phone::PrintMessages() {
  for (const auto &message : messages_) {
    std::cout << message->GetSender() << ": " << message->GetMessage() << "\n";
  }
};
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Phone class.
// ===================================================================