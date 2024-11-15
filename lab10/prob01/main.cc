// Alton Bonilla
// 121L-15 (e.g. CPSC 121L-01)
// 4/12/23
// alton77@csu.fullerton.edu email
// @alton7759
//
// Lab 10-1
// If it is a pair programming lab please specify partner below.
// Partner: @Ahan003, @eduardo-lara0616

#include <iostream>

#include "foodpantry.h"
#include "volunteer.h"

std::shared_ptr<FoodPantry> CreatePantry(const std::string &pantry_name) {
  // =================== YOUR CODE HERE ===================
  FoodPantry myfood{pantry_name};
  std::shared_ptr<FoodPantry> foodptr = std::make_shared<FoodPantry>(myfood);
  // 1. Create a shared_ptr containing a FoodPantry with
  //    the given pantry_name, and return the shared_ptr.
  // ======================================================
  return foodptr;
}

int main() {
  Volunteer jc("JC");
  Volunteer paul("Paul");

  // =================== YOUR CODE HERE ===================
  // 2. Call CreatePantry, passing in "Tuffy's Pantry"
  std::shared_ptr<FoodPantry> tuffys_pantry = CreatePantry("Tuffy's Pantry");
  //    and assign it to a shared_ptr named tuffys_pantry.
  // ======================================================

  // 3. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
  std::cout << tuffys_pantry.use_count() << std::endl;

  // =================== YOUR CODE HERE ===================
  // 4. Assign the Volunteers `jc` and `paul` to the
  //    tuffys_pantry using the AssignToPantry function.
  jc.AssignToPantry(tuffys_pantry);
  paul.AssignToPantry(tuffys_pantry);
  // ======================================================

  // 5. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
  std::cout << tuffys_pantry.use_count() << std::endl;

  // If you're here, uncomment the two lines of code below!
  jc.AssignedPantry()->Donate("Mango", 5);
  paul.AssignedPantry()->Donate("Mango", 20);

  // 6. With your lab partner, predict what this prints out.
  //    Look in the foodpantry.h file to see what it does.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
  tuffys_pantry->DisplayPantryItems();

  // =================== YOUR CODE HERE ===================
  // 7. Call CreatePantry and create a new shared_ptr
  //    representing a different pantry location.
  //    Assign `jc` and `paul` to the new pantry.
  std::shared_ptr<FoodPantry> alton_pantry = CreatePantry("Alton's pantry");
  jc.AssignToPantry(alton_pantry);
  paul.AssignToPantry(alton_pantry);
  // ======================================================

  // 8. With your lab partner, predict what this prints out.
  //    Then uncomment the line below, and run main to check.
  //    Your prediction:
  std::cout << tuffys_pantry.use_count() << std::endl;

  // 9. With your lab partner, predict what this prints out.
  //    Then uncomment the lines below, and run main to check.
  //    Your prediction:
  tuffys_pantry = nullptr;
  std::cout << tuffys_pantry.use_count() << std::endl;

  // 10. Print out the secret key to confirm that you and
  //     your lab partner have read the README.
  std::cout << "TUFFY121L" << std::endl;
}