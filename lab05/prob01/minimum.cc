// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/28/23
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 5-1
// Partner: @peteranteater

#include "minimum.h"

int IndexOfMinimumElement(std::vector<double> &input) {
  // ==================== YOUR CODE HERE ====================
  double snumer{0};
  int sindex{0};
  if (input.empty()) {
    return -1;
  }
  for (int i = 0; i < input.size(); i++) {
    if (snumer > input.at(i)) {
      snumer = input.at(i);
      sindex = i;
    }
  }

  return sindex;
  // Find the index of the smallest element in the input
  // vector, and return it. If the input vector is empty,
  // return -1.
  // ========================================================
}
