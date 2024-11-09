// Please fill in below.
// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/18/23
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 11-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "bank.h"

// ========================= YOUR CODE HERE =========================
// This implementation file (bank.cc) is where you should implement
// the member functions declared in the header (bank.h), only
// if you didn't implement them inline within bank.h.
//
Bank::Bank() : bank_name_{"bruh"} {};
Bank::Bank(const std::string &bankname) : bank_name_{bankname} {};
std::string Bank::GetBankName() {
  return bank_name_;
};
std::map<int, Account> Bank::GetAccounts() {
  return accounts_;
};
int Bank::CreateAccount(const std::string &accountholder,
                        const double &initialbalance) {
  Account the_account{accountholder, initialbalance};
  int temp = GenerateAccountId();
  accounts_.insert({temp, the_account});
  return temp;
}
int Bank::TotalAccounts() {
  return accounts_.size();
};
void Bank::DisplayBalances() {
  for (std::map<int, Account>::iterator it = accounts_.begin();
       it != accounts_.end(); it++) {
    std::cout << it->second.GetAccountHolder() << ": $"
              << it->second.GetBalance() << "\n";
  }
};
void Bank::DeactivateAccount(const int &id) {
  std::map<int, Account>::iterator it = accounts_.find(id);
  accounts_.erase(it);
}
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Bank class.
// ===================================================================