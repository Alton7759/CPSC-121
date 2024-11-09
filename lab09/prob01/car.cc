// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 4/4/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 9-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include "car.h"

#include <iostream>

// ========================= YOUR CODE HERE =========================
// This implementation file (car.cc) is where you should implement
// the member functions declared in the header (car.h), only
// if you didn't implement them inline within car.h.
Car::Car() {}
Car::Car(const VehicleId &id) : id_{id} {}
Car::Car(const Date &release_date) : release_date_{release_date} {}
Car::Car(const VehicleId &id, const Date &release_date)
    : id_{id}, release_date_{release_date} {}
VehicleId Car::Id() const {
  return id_;
}
void Car::SetId(const VehicleId &id) {
  id_ = id;
}
Date Car::ReleaseDate() const {
  return release_date_;
}
void Car::SetReleaseDate(const Date &release_date) {
  release_date_ = release_date;
}
void Car::Print() {
  std::cout << "The model of the car is: " << id_.Model() << "\n";
  std::cout << "The VIN of the car is: " << id_.Vin() << "\n";
  std::cout << "The license plate of the car is: " << id_.LicensePlate()
            << "\n";
  std::cout << "The release date of the car is: " << release_date_.Month()
            << "/" << release_date_.Day() << "/" << release_date_.Year()
            << "\n";
}
//
// Remember to specify the name of the class with :: in this format:
//     <return type> MyClassName::MyFunction() {
//        ...
//     }
// to tell the compiler that each function belongs to the Car class.
// ===================================================================