// Alton Bonilla
// CPSC 121L-15
// 4/26/23
// alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 12-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <memory>
#include <string>

class Customer {
 public:
  Customer();
  Customer(const std::string &customername, const int &produccount,
           const std::shared_ptr<Customer> &nextcustomer);

  std::string GetName() const;
  int GetProductCount() const;
  std::shared_ptr<Customer> GetNextCustomer() const;

  int TotalCustomersInLine();
  int TotalProductsInLine();
  std::string FirstAlphabeticalCustomerInLine();
  // ====================== YOUR CODE HERE ======================
  // 1. Define a constructor using member initializer list syntax
  //    according to the README.
  // 2. Define the accessor functions (i.e. the getter functions)
  //    `GetName`, `GetProductCount`, and `GetNextCustomer`.
  //    You do not need to create mutator functions (setters).
  // 3. Define the recursive functions specified in the README.
  // ============================================================

 private:
  std::string name_;
  int product_count_;
  std::shared_ptr<Customer> next_customer_;
};
