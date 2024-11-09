// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/4/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 9-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "date.h"
#include "vehicleid.h"

// ======================= YOUR CODE HERE =======================
// Write the Car class here, containing two member variables:
// id_ to store the vehicle identity info and release_date_
// to store the car's release date.

class Car {
 public:
  Car();
  Car(const VehicleId &id);
  Car(const Date &release_date);
  Car(const VehicleId &id, const Date &release_date);
  VehicleId Id() const;
  void SetId(const VehicleId &id);
  Date ReleaseDate() const;
  void SetReleaseDate(const Date &release_date);
  void Print();

 private:
  VehicleId id_;
  Date release_date_;
};

// Then, define the following constructor overloads:
// 1. A default constructor, left empty. The id_ and release_date
//    will be initialized to their default values automatically.
// 2. A non-default constructor, which accepts a VehicleId object.
// 3. A non-default constructor, which accepts a Date object.
// 4. A non-default constructor, which accepts a VehicleId and Date
//    object (in that order).
//
// Finally, define the following member functions:
// 1. The accessor (getter) function for the id_.
// 2. The mutator (setter) function for the id_.
// 3. The accessor (getter) function for the release_date_.
// 4. The mutator (setter) function for the release_date_.
// 5. The Print member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// Pass objects by const reference, e.g. for the Date object
// passed in as input to SetReleaseDate.
// ===============================================================