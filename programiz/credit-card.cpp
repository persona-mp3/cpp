/*
 * Given a credit card number, hide the first 12 digits using *
 * https://app.programiz.pro/community-challenges/preview/cpp-hide-credit-card/info
 * */

#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

void printer(string s) { cout << s << '\n'; }

bool isValidCreditCard(string creditCardNum) {
  int ccLength = 16;
  for (int i = 0; i < creditCardNum.length(); i++) {
    if (!isdigit(creditCardNum[i])) {
      return false;
    }
  }

  if (creditCardNum.length() != ccLength) {
    return false;
  }
  return true;
}

string hideDetails(string cc) {

  string openDigits = cc.substr(12);
  string hiddenDetails;
  int counter = 0;
  for (; counter < 15; counter++) {
    if ((counter != 0 && counter != 1) && counter % 4 == 0) {
      hiddenDetails += "-";
    }
    hiddenDetails += '*';
  }

  hiddenDetails.append(openDigits);
  return hiddenDetails;
}

int main(int argc, char *argv[]) {
  string userInput;
  string hiddenCC;

  while (true) {
    printer("Enter your credit card number: ");
    cin >> userInput;
    if (isValidCreditCard(userInput)) {
      hiddenCC = hideDetails(userInput);
      break;
    } else {
      printer("Invalid credit card details please try again. Must not contain "
              "any interger types and be of 16 digits");
    }
  }

  // since std::string is not a string that can be copied with memcpy, so using
  // the `c_str()` method converts it to a c-type string? Stackoverflow:
  // https://stackoverflow.com/questions/62228109/error-cannot-pass-object-of-non-trivial-type-stdstring-and-more-errors
  printf("Hidden Credit Card: %s\n", hiddenCC.c_str());
  return 0;
}
