// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/18/23
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 11-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>
#include <memory>
#include <string>

#include "account.h"

class Bank {
 public:
  Bank();
  Bank(const std::string &bankname);
  std::string GetBankName();
  std::map<int, Account> GetAccounts();
  int CreateAccount(const std::string &accountholder,
                    const double &initialbalance);
  int TotalAccounts();
  void DisplayBalances();
  void DeactivateAccount(const int &id);

  // ======================= YOUR CODE HERE =======================
  // Write the Bank class here. Refer to the README for the member
  // variables, constructors, and member functions needed.
  //
  // Note: mark functions that do not modify the member variables
  // as const, by writing `const` after the parameter list.
  // Pass objects by const reference when appropriate.
  // Remember that std::string is an object!
  // ===============================================================

 private:
  // We provided this helper function to you to randomly generate
  // a new Bank Account ID to be used in CreateAccount.
  std::string bank_name_;
  std::map<int, Account> accounts_;
  int GenerateAccountId() const {
    return std::rand() % 9000 + 1000;  // [1000, 9999]
  }
};