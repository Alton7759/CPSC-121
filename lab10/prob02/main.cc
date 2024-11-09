// Alton Bonilla
// 121L-15 (e.g. CPSC 121L-01)
// 4/12/23
// alton77@csu.fullerton.edu email
// @alton7759
//
// Lab 10-2
// If it is a pair programming lab please specify partner below.
// Partner: @Ahan003, @eduardo-lara0616

#include <iostream>
#include <memory>

#include "network.h"
#include "phone.h"

int main() {
  Network csuf_network;
  // =================== YOUR CODE HERE ===================
  // 1. Create 3 objects of type `std::shared_ptr<Phone>`.
  Phone p1{"Anna"};
  Phone p2{"Raf"};
  Phone p3{"JC"};
  std::shared_ptr<Phone> phone1 = std::make_shared<Phone>(p1);
  std::shared_ptr<Phone> phone2 = std::make_shared<Phone>(p2);
  std::shared_ptr<Phone> phone3 = std::make_shared<Phone>(p3);
  //    `phone1`: a pointer to a Phone owned by Anna
  //    `phone2`: a pointer to a Phone owned by Raf
  //    `phone3`: a pointer to a Phone owned by JC
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 2. Add each phone to the Network, `csuf_network`.
  csuf_network.AddPhone(phone1);
  csuf_network.AddPhone(phone2);
  csuf_network.AddPhone(phone3);

  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 3. Send the message "Sup" to Raf over the network,
  //    authored on Anna's phone.
  csuf_network.SendMessage(phone1->AuthorMessage("Sup"), phone2->GetOwner());
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 4. Send the message "Lol" to Anna over the network,
  //    authored on Raf's phone.
  csuf_network.SendMessage(phone2->AuthorMessage("Lol"), phone1->GetOwner());
  // ======================================================

  // =================== YOUR CODE HERE ===================
  std::vector<std::string> jcs_class{phone1->GetOwner(), phone2->GetOwner()};
  csuf_network.SendMessage(phone3->AuthorMessage("Hi class!"), jcs_class);
  // 5. Create a vector of strings containing "Anna" and
  //    "Raf" called `jcs_class`. Call the SendMessage
  //     overload to author a message on JC's phone and send
  //     the message "Hi class!" to everyone in `jcs_class`.
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 6. Send the message "Hi Prof!" to JC over the network,
  //    authored on Anna's phone.
  csuf_network.SendMessage(phone1->AuthorMessage("Hi Prof!"),
                           phone3->GetOwner());
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 7. Send the message "help how do C++" to JC over the
  //    network, authored on Raf's phone.
  csuf_network.SendMessage(phone2->AuthorMessage("help how do C++"),
                           phone3->GetOwner());
  // ======================================================

  // =================== YOUR CODE HERE ===================
  // 8. Complete the std::cout statements below to display
  //    the messages on Anna's phone, Raf's phone, and JC's
  //    phone in that order. Follow the README for an example.
  // ======================================================
  std::cout << "Printing messages sent to " << phone1->GetOwner() << ":\n";
  phone1->PrintMessages();
  std::cout << "\n";
  std::cout << "Printing messages sent to " << phone2->GetOwner() << ":\n";
  phone2->PrintMessages();
  std::cout << "\n";
  std::cout << "Printing messages sent to " << phone3->GetOwner() << ":\n";
  phone3->PrintMessages();
}