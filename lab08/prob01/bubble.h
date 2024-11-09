// Alton Bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 3/23/23
// alton77@csu.fullerton.edu
// alton7759
//
// Lab 8-1
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

// ======================= YOUR CODE HERE =======================
// Write the Bubble class here, containing one member variable,
// the radius_. Note that radius_ can be a decimal value.
//
// Then, define the following member functions:
// 1. The accessor (getter) function for radius_.
// 2. The mutator (setter) function for radius_.
// 3. The CalculateVolume member function.
//
// Note: mark functions that do not modify the member variables
// as const, by writing `const` after the parameter list.
// ===============================================================

class Bubble {
 public:
  Bubble();
  Bubble(const double &radius1);
  double GetRadius() const;
  void SetRadius(const double &radius1);
  double CalculateVolume() const;

 private:
  double radius1_;
};

// ========================= YOUR CODE HERE =========================
// Write the function declaration for the CombineBubbles function.
Bubble CombineBubbles(const Bubble &bubble1, const Bubble &bubble2);
// 1. Use pass-by-reference to pass in the Bubble objects efficiently.
// 2. Consider if the inputs passed in should be modified. If not,
//    please mark them const.
// ===================================================================
