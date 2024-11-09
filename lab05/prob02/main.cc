// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/28/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 5-2
// Partner: @peteranteater

#include <iomanip>
#include <iostream>
#include <vector>

#include "calculate_avg.h"

int main() {
  int num_students = 0;
  std::cout << "How many students are in your class? ";
  std::cin >> num_students;

  if (num_students <= 0) {
    std::cout << "You have no students!\n";
  } else {
    std::vector<double> allstudents(num_students);
    double gp_aholder{0};
    std::cout << "Enter the GPA for the students in your class (0.0 - 4.0)\n";

    for (int i = 0; i < num_students; i++) {
      std::cout << "Enter the GPA for student #" << i + 1 << ": ";
      std::cin >> gp_aholder;
      allstudents.at(i) = gp_aholder;
    }
    double average = CalculateAverage(allstudents);

    std::cout << "Class average: " << std::setprecision(2) << std::fixed
              << average << "\n";
  }

  return 0;
}
