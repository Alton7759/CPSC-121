// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/4/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 9-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iostream>

#include "car.h"
/*#include "date.h"
#include "vehicleid.h"*/

int main() {
  // =================== YOUR CODE HERE ===================
  // 1. Create a Car object called `c1` using the default
  //    constructor.
  //    Call its Print member function.
  Car c1;
  c1.Print();
  // ======================================================
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 2. Create a `VehicleId` object with the following info:
  //    Model: Honda, ID: 3, License plate: 7B319X4
  //    Create a `Car` object `c2` using the constructor that
  //    accepts a `VehicleId` and  pass in the `VehicleId`
  //    object you just made.
  //    Call its Print member function.
  VehicleId i_d3("Honda", 3, "7B319X4");
  Car c2(i_d3);
  c2.Print();
  // ======================================================
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 3. Create a `Date` object with the following info:
  //    Day: 4, Month: 11, Year: 2018
  //    Create a `Car` object `c3` using the constructor that
  //    accepts a `Date` object and pass in the `Date` object
  //    you just made.
  //    Call its Print member function.
  Date date(4, 11, 2018);
  Car c3(date);
  c3.Print();
  // ======================================================
  std::cout << "\n";

  // =================== YOUR CODE HERE ===================
  // 4. Create a `Car` object `c4` using the constructor that
  //    accepts a `VehicleId` and `Date` object and pass in
  //    the `VehicleId` and `Date` objects you created in
  //    steps 2 and 3 above.
  //    Call its Print member function.
  Car c4(i_d3, date);
  c4.Print();
  std::cout << "\n";
  // ======================================================

  // 5. Create an instance of `VehicleId` using the default constructor.
  VehicleId i_ddefault;
  // 6. Create an instance of `Date` using the default constructor.
  Date datedefault;
  // 7. Call the `SetId` member function on `c4` and pass
  //    in the VehicleId you just created.
  c4.SetId(i_ddefault);
  // 8. Call the `SetReleaseDate` member function on `c4`
  //    and pass in the VehicleId you just created.
  c4.SetReleaseDate(datedefault);
  // 9. Finally, call the Print member function for `c4`.
  c4.Print();
  return 0;
}