/*
 * Question: A student passes if their score is above || 40. It should return
 * "Pass" or "Fail"
 * */

#include <iostream>
#include <string>

void printer(std::string s) { std::cout << s << '\n'; }

std::string scoreSuccess(int score) {
  int pass = 40;
  if (score >= 40) {
    return "Pass";
  } else {
    return "Fail";
  }
}

bool isValidInt(std::string userInput) {
  for (int i = 0; i < userInput.length(); i++) {
    if (!std::isdigit(userInput[i])) {
      printer("Input is not a valid interger, please enter a valid number ");
      return false;
    }
  }

  return true;
}

int main(int argc, char *argv[]) {
  // how to check if user input is an interger
  std::string studentScore{};
  while (true) {

    std::cout << "Enter student score: ";

    std::cin >> studentScore;

    if (!isValidInt(studentScore)) {
      continue;
    } else {
      break;
    }
  }

  std::string success = scoreSuccess(stoi(studentScore));
  std::cout << success << std::endl;
  return 0;
}
