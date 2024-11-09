// Alton bonilla
// CPSC 121L-15 (e.g. CPSC 121L-01)
// 2/28/23
// Alton77@csu.fullerton.edu
// alton7759
//
// Lab 5-3
// Partner: @peteranteater

#include <iostream>
#include <map>
#include <string>

int main() {
  std::string text;
  std::cout << "Enter text to analyze: ";
  // std::getline allows us to capture an entire line of input
  // and store it into the text variable.
  std::getline(std::cin, text);

  std::map<char, int> letters;
  for (char &l : text) {
    if (letters.count(l) == 0) {
      letters.insert({l, 1});
    } else {
      letters.at(l) += 1;
    }
  }

  // The code block in a while loop will be executed as long as
  // the condition in the parentheses is true. We use `while (true)`
  // so we can ask the user for input as many times as they want.
  char input = 'Q';
  while (true) {
    std::cout << "What character do you want stats on? ";
    std::cin >> input;
    // The special keyword "break" is used to jump out of a loop.
    // Since the while loop's condition is always true, we will
    // only stop looping when the user inputs 'Q'.
    if (input == 'Q') {
      break;
    }
    if (letters.count(input) != 0) {
      std::cout << "The character " << input << " appears " << letters.at(input)
                << " times.\n";
    } else {
      std::cout << "The character " << input << " appears 0 times.\n";
    }
  }
  std::cout << "Goodbye!" << std::endl;
  return 0;
}
