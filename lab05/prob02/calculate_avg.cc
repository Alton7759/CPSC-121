// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/28/23
// alton77@csu.fullerton.edu
// Alton7759
//
// Lab 5-2
// Partner: @peteranteater

#include <iostream>
#include <vector>

double CalculateAverage(const std::vector<double> &student_grades) {
  double avg{0.0};
  if (!student_grades.empty()) {
    for (double gradesholder : student_grades) {
      avg = avg + gradesholder;
      std::cout << avg << "\n";
    }
    avg = avg / student_grades.size();
  }
  return avg;
}
