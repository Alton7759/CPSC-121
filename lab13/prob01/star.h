// Alton Bonilla
// CPSC 121L-15
// 5/2/2023
// Alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 13-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <iomanip>
#include <iostream>
#include <string>
class Star {
 public:
  // ====================== YOUR CODE HERE ======================
  // Define the following members for the Star class:
  //
  ~Star();
  Star();
  Star(const std::string &name, const double &radius);

  std::string GetName();

 private:
  std::string name_;
  double radius_;

  //   1. One member variable representing the name of the star,
  //      and one representing the solar radius of the star.
  //   2. A constructor, which initializes the name of the star,
  //      and the radius of the star. The constructor should
  //      print that the star was born to the terminal.
  //   3. A destructor that prints to the terminal that the star
  //      was destroyed (i.e. went supernova), and print how many
  //      times the volume of the sun that the star was.
  //   4. An accessor function, `GetName` for the star's name.
  // ============================================================
};