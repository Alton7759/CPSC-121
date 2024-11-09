// Alton Bonilla
// CPSC 121L-15
// 4/26/23
// alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 12-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "customer.h"
Customer::Customer()
    : name_{"alton"}, product_count_{69}, next_customer_{nullptr} {};
Customer::Customer(const std::string &customername, const int &produccount,
                   const std::shared_ptr<Customer> &nextcustomer)
    : name_{customername},
      product_count_{produccount},
      next_customer_{nextcustomer} {}

std::string Customer::GetName() const {
  return name_;
}
int Customer::GetProductCount() const {
  return product_count_;
}
std::shared_ptr<Customer> Customer::GetNextCustomer() const {
  return next_customer_;
}

int Customer::TotalCustomersInLine() {
  if (next_customer_ != nullptr) {
    return 1 + next_customer_->TotalCustomersInLine();
  }
  return 1;
}
int Customer::TotalProductsInLine() {
  if (next_customer_ != nullptr) {
    return product_count_ + next_customer_->TotalProductsInLine();
  }
  return product_count_;
}

std::string Customer::FirstAlphabeticalCustomerInLine() {
  if (next_customer_ != nullptr) {
    if (name_ > next_customer_->FirstAlphabeticalCustomerInLine()) {
      return next_customer_->FirstAlphabeticalCustomerInLine();
    } else {
      return name_;
    }
  }
  return name_;
}
// ========================= YOUR CODE HERE =========================
// This implementation file (customer.cc) is where you should implement
// the member functions declared in the header (customer.h), only
// if you didn't implement them inline within customer.h.
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Customer class.
// ===================================================================