// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/18/23
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 11-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <vector>

#include "bank.h"

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Bank object, name it anything you'd like :)
  Bank taco;
  // =======================================================
  // =================== YOUR CODE HERE ===================
  // 2. Create 3 new accounts in your bank.
  //    * The 1st account should belong to "Tuffy", with
  //      a balance of $121.00
  taco.CreateAccount("Tuffy", 121.00);
  //    * The 2nd account should belong to "Frank", with
  //      a balance of $1234.56
  taco.CreateAccount("Frank", 1234.56);
  //    * The 3nd account should belong to "Oreo", with
  //      a balance of $140.12
  taco.CreateAccount("Oreo", 140.12);
  // =======================================================
  //  =================== YOUR CODE HERE ===================
  //  3. Deactivate Tuffy's account.
  taco.DeactivateAccount(6383);
  // =======================================================

  // =================== YOUR CODE HERE ===================
  // 4. Call DisplayBalances to print out all *active*
  //    account balances.
  taco.DisplayBalances();
  // =======================================================
}
