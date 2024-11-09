// Alton Bonilla
// CPSC 121L-15
// 4/26/23
// alton77@csu.fullerton.edu email
// Alton7759
//
// Lab 12-2
// If it is a pair programming lab please specify partner below.
// Partner: @peteranteater

#include <memory>
#include <string>

class Train {
 public:
  Train(int passenger_count, int seat_count,
        std::shared_ptr<Train> next_carriage)
      : passenger_count_(passenger_count),
        seat_count_(seat_count),
        next_carriage_(next_carriage) {}

  int GetPassengerCount() const {
    return passenger_count_;
  }
  int GetSeatCount() const {
    return seat_count_;
  }
  std::shared_ptr<Train> GetNextCarriage() const {
    return next_carriage_;
  }
  // ====================== YOUR CODE HERE ======================
  // Define the following recursive member functions, according
  // to the instructions in the README:
  //
  //   1. TotalTrainPassengers
  int TotalTrainPassengers();
  //   2. MaxCarriagePassengers
  int MaxCarriagePassengers();
  //   3. IsTrainFull
  bool IsTrainFull();
  //   4. AddCarriageToEnd
  void AddCarriageToEnd(const std::shared_ptr<Train> &newpart);
  // ============================================================

 private:
  int passenger_count_;
  int seat_count_;
  std::shared_ptr<Train> next_carriage_;
};
